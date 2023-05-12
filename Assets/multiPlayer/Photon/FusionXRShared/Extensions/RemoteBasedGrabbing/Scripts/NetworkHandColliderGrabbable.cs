using Fusion;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Fusion.XR.Shared.Grabbing.NetworkHandColliderBased
{
    /**
     * 
     * Declare that this game object can be grabbed by a NetworkHandColliderGrabber
     * 
     * Handle following the grabbing NetworkHandColliderGrabber
     * 
     **/

    [OrderAfter(typeof(NetworkHandColliderGrabber))]
    public class NetworkHandColliderGrabbable : NetworkBehaviour
    {
        [HideInInspector]
        public NetworkTransform networkTransform;
        public NetworkRigidbody networkRigidbody;
        [Networked(OnChanged = nameof(OnGrabberChanged))]
        public NetworkHandColliderGrabber CurrentGrabber { get; set; }
        [Networked]
        private Vector3 LocalPositionOffset { get; set; }
        [Networked]
        private Quaternion LocalRotationOffset { get; set; }

        public bool IsGrabbed => CurrentGrabber != null;
        public bool expectedIsKinematic = true;
        [Tooltip("For object with a rigidbody, if true, apply hand velocity on ungrab")]
        public bool applyVelocityOnRelease = true;

        // Velocity computation
        const int velocityBufferSize = 5;
        Vector3 lastPosition;
        Quaternion previousRotation;
        Vector3[] lastMoves = new Vector3[velocityBufferSize];
        Vector3[] lastAngularVelocities = new Vector3[velocityBufferSize];
        float[] lastDeltaTime = new float[velocityBufferSize];
        int lastMoveIndex = 0;

        [Header("Events")]
        public UnityEvent onDidUngrab = new UnityEvent();
        [Tooltip("Called only for the local grabber, when they may wait for authority before grabbing. onDidGrab will be called on all users")]
        public UnityEvent<NetworkHandColliderGrabber> onWillGrab = new UnityEvent<NetworkHandColliderGrabber>();
        public UnityEvent<NetworkHandColliderGrabber> onDidGrab = new UnityEvent<NetworkHandColliderGrabber>();

        [Header("Advanced options")]
        public bool extrapolateWhileTakingAuthority = true;
        public bool isTakingAuthority = false;

        Vector3 localPositionOffsetWhileTakingAuthority;
        Quaternion localRotationOffsetWhileTakingAuthority;
        NetworkHandColliderGrabber grabberWhileTakingAuthority;

        public static void OnGrabberChanged(Changed<NetworkHandColliderGrabbable> changed)
        {
            // We load the previous state to find what was the grabber before
            changed.LoadOld();
            NetworkHandColliderGrabber previousGrabber = null;
            if (changed.Behaviour.CurrentGrabber != null)
            {
                previousGrabber = changed.Behaviour.CurrentGrabber;
            }
            // We reload the current state to see the current grabber
            changed.LoadNew();

            if (previousGrabber)
            {
                changed.Behaviour.DidUngrab();
            }
            if (changed.Behaviour.CurrentGrabber)
            {
                changed.Behaviour.DidGrab();
            }
        }

        Vector3 Velocity
        {
            get
            {
                Vector3 move = Vector3.zero;
                float time = 0;
                for (int i = 0; i < velocityBufferSize; i++)
                {
                    if (lastDeltaTime[i] != 0)
                    {
                        move += lastMoves[i];
                        time += lastDeltaTime[i];
                    }
                }
                if (time == 0) return Vector3.zero;
                return move / time;
            }
        }

        Vector3 AngularVelocity
        {
            get
            {
                Vector3 culmulatedAngularVelocity = Vector3.zero;
                int step = 0;
                for (int i = 0; i < velocityBufferSize; i++)
                {
                    if (lastDeltaTime[i] != 0)
                    {
                        culmulatedAngularVelocity += lastAngularVelocities[i];
                        step++;
                    }
                }
                if (step == 0) return Vector3.zero;
                return culmulatedAngularVelocity / step;
            }
        }

        private void Awake()
        {
            networkTransform = GetComponent<NetworkTransform>();
            networkRigidbody = GetComponent<NetworkRigidbody>();

        }

        public override void Spawned()
        {
            base.Spawned();
            if (networkRigidbody)
            {
                // We store the default kinematic state, while it is not affected by NetworkRigidbody logic
                expectedIsKinematic = (networkRigidbody.ReadNetworkRigidbodyFlags() & NetworkRigidbodyBase.NetworkRigidbodyFlags.IsKinematic) != 0;
            }
        }

        public void Ungrab()
        {
            CurrentGrabber = null;
        }

        public async void Grab(NetworkHandColliderGrabber newGrabber)
        {
            if (onWillGrab != null) onWillGrab.Invoke(newGrabber);

            // Find grabbable position/rotation in grabber referential
            localPositionOffsetWhileTakingAuthority = newGrabber.transform.InverseTransformPoint(transform.position);
            localRotationOffsetWhileTakingAuthority = Quaternion.Inverse(newGrabber.transform.rotation) * transform.rotation;
            grabberWhileTakingAuthority = newGrabber;

            // Ask and wait to receive the stateAuthority to move the object
            isTakingAuthority = true;
            await Object.WaitForStateAuthority();
            isTakingAuthority = false;

            // We waited to have the state authority before setting Networked vars
            LocalPositionOffset = localPositionOffsetWhileTakingAuthority;
            LocalRotationOffset = localRotationOffsetWhileTakingAuthority;

            // Update the CurrentGrabber in order to start following position in the FixedUpdateNetwork
            CurrentGrabber = grabberWhileTakingAuthority;
        }

        void DidGrab()
        {
            // While grabbed, we disable physics forces on the object, to force a position based tracking
            if (networkRigidbody) networkRigidbody.Rigidbody.isKinematic = true;
            if (onDidGrab != null) onDidGrab.Invoke(CurrentGrabber);
        }

        void DidUngrab()
        {
            // We restore the default isKinematic state if needed
            if (networkRigidbody) networkRigidbody.Rigidbody.isKinematic = expectedIsKinematic;

            // We apply release velocity if needed
            if (networkRigidbody && networkRigidbody.Rigidbody.isKinematic == false && applyVelocityOnRelease)
            {
                networkRigidbody.Rigidbody.velocity = Velocity;
                networkRigidbody.Rigidbody.angularVelocity = AngularVelocity;
            }

            // Reset velocity tracking
            for (int i = 0; i < velocityBufferSize; i++) lastDeltaTime[i] = 0;
            lastMoveIndex = 0;

            if (onDidUngrab != null) onDidUngrab.Invoke();
        }

        public override void FixedUpdateNetwork()
        {
            // We only update the object position if we have the state authority
            if (!Object.HasStateAuthority) return;

            if (!IsGrabbed) return;
            // Follow grabber, adding position/rotation offsets
            Follow(followingtransform: transform, followedTransform: CurrentGrabber.transform, LocalPositionOffset, LocalRotationOffset);
        }

        private void Update()
        {
            if (Runner)
            {
                // Velocity tracking
                lastMoves[lastMoveIndex] = transform.position - lastPosition;
                lastAngularVelocities[lastMoveIndex] = previousRotation.AngularVelocityChange(transform.rotation, Time.deltaTime);
                lastDeltaTime[lastMoveIndex] = Time.deltaTime;
                lastMoveIndex = (lastMoveIndex + 1) % 5;
                lastPosition = transform.position;
                previousRotation = transform.rotation;
            }
        }

        public override void Render()
        {
            if (isTakingAuthority && extrapolateWhileTakingAuthority)
            {
                // If we are currently taking the authority on the object due to a grab, the network info are still not set
                //  but we will extrapolate anyway (if the option extrapolateWhileTakingAuthority is true) to avoid having the grabbed object staying still until we receive the authority
                ExtrapolateWhileTakingAuthority();
                return;
            }

            // No need to extrapolate if the object is not grabbed
            if (!IsGrabbed) return;

            // Extrapolation: Make visual representation follow grabber, adding position/rotation offsets
            // We extrapolate for all users: we know that the grabbed object should follow accuratly the grabber, even if the network position might be a bit out of sync
            Follow(followingtransform: networkTransform.InterpolationTarget.transform, followedTransform: CurrentGrabber.hand.networkTransform.InterpolationTarget.transform, LocalPositionOffset, LocalRotationOffset);
        }

        void ExtrapolateWhileTakingAuthority()
        {
            // No need to extrapolate if the object is not really grabbed
            if (grabberWhileTakingAuthority == null) return;

            // Extrapolation: Make visual representation follow grabber, adding position/rotation offsets
            // We use grabberWhileTakingAuthority instead of CurrentGrabber as we are currently waiting for the authority transfer: the network vars are not already set, so we use the temporary versions
            Follow(followingtransform: networkTransform.InterpolationTarget.transform, followedTransform: grabberWhileTakingAuthority.hand.networkTransform.InterpolationTarget.transform, localPositionOffsetWhileTakingAuthority, localRotationOffsetWhileTakingAuthority);
        }

        void Follow(Transform followingtransform, Transform followedTransform, Vector3 localPositionOffsetToFollowed, Quaternion localRotationOffsetTofollowed)
        {
            followingtransform.position = followedTransform.TransformPoint(localPositionOffsetToFollowed);
            followingtransform.rotation = followedTransform.rotation * localRotationOffsetTofollowed;
        }
    }
}
