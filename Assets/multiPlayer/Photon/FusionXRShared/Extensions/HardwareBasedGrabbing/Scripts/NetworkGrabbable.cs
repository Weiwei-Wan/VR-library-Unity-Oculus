using Fusion;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Fusion.XR.Shared.Grabbing
{
    /**
     * 
     * Declare that this game object can be grabbed by a NetworkGrabber
     * 
     * Handle following the grabbing NetworkGrabber
     * 
     **/
    [OrderAfter(typeof(NetworkGrabber))]
    public class NetworkGrabbable : NetworkBehaviour
    {
        [HideInInspector]
        public NetworkTransform networkTransform;
        public NetworkRigidbody networkRigidbody;
        [Networked(OnChanged = nameof(OnGrabberChanged))]
        public NetworkGrabber CurrentGrabber { get; set; }
        [Networked]
        private Vector3 LocalPositionOffset { get; set; }
        [Networked]
        private Quaternion LocalRotationOffset { get; set; }

        public bool IsGrabbed => Object != null && CurrentGrabber != null; // We make sure that we are online before accessing [Networked] var


        [Header("Events")]
        public UnityEvent onDidUngrab = new UnityEvent();
        public UnityEvent<NetworkGrabber> onDidGrab = new UnityEvent<NetworkGrabber>();

        [Header("Advanced options")]
        public bool extrapolateWhileTakingAuthority = true;
        public bool isTakingAuthority = false;

        [HideInInspector]
        public Grabbable grabbable;

        // Callback that will be called on all clients on grabber change (grabbing/ungrabbing)
        public static void OnGrabberChanged(Changed<NetworkGrabbable> changed)
        {
            // We load the previous state to find what was the grabber before
            changed.LoadOld();
            NetworkGrabber previousGrabber = null;
            if (changed.Behaviour.CurrentGrabber != null)
            {
                previousGrabber = changed.Behaviour.CurrentGrabber;
            }
            // We reload the current state to see the current grabber
            changed.LoadNew();

            changed.Behaviour.HandleGrabberChange(previousGrabber);
        }

        protected virtual void HandleGrabberChange(NetworkGrabber previousGrabber)
        {
            if (previousGrabber)
            {
                DidUngrab();
            }
            if (CurrentGrabber)
            {
               DidGrab();
            }
        }

        protected virtual void Awake()
        {
            networkTransform = GetComponent<NetworkTransform>();
            networkRigidbody = GetComponent<NetworkRigidbody>();
            grabbable = GetComponent<Grabbable>();
            if (grabbable == null)
            {
                Debug.LogError("NetworkGrabbable requires a Grabbable");// We do not use requireComponent as this classes can be subclassed
                gameObject.AddComponent<Grabbable>();
            }
        }

        #region Interface for local Grabbable (when the local user grab/ungrab this object)
        public virtual void LocalUngrab()
        {
            CurrentGrabber = null;
        }

        public async virtual void LocalGrab()
        {
            // Ask and wait to receive the stateAuthority to move the object
            isTakingAuthority = true;
            await Object.WaitForStateAuthority();
            isTakingAuthority = false;

            // We waited to have the state authority before setting Networked vars
            LocalPositionOffset = grabbable.localPositionOffset;
            LocalRotationOffset = grabbable.localRotationOffset;

            // Update the CurrentGrabber in order to start following position in the FixedUpdateNetwork
            CurrentGrabber = grabbable.currentGrabber.networkGrabber;
        }
        #endregion

        public override void Spawned()
        {
            base.Spawned();
            if (networkRigidbody)
            {
                // We store the default kinematic state, while it is not affected by NetworkRigidbody logic
                grabbable.expectedIsKinematic = (networkRigidbody.ReadNetworkRigidbodyFlags() & NetworkRigidbodyBase.NetworkRigidbodyFlags.IsKinematic) != 0;
            }
        }

        protected virtual void DidGrab()
        {
            grabbable.DidGrab();
            if (onDidGrab != null) onDidGrab.Invoke(CurrentGrabber);
        }

        protected virtual void DidUngrab()
        {
            grabbable.DidUngrab();
            if (onDidUngrab != null) onDidUngrab.Invoke();
        }

        public override void FixedUpdateNetwork()
        {
            // We only update the object position if we have the state authority
            if (!Object.HasStateAuthority) return;

            if (!IsGrabbed) return;
            // Follow grabber, adding position/rotation offsets
            grabbable.Follow(followingtransform: transform, followedTransform: CurrentGrabber.transform, LocalPositionOffset, LocalRotationOffset);
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
            grabbable.Follow(followingtransform: networkTransform.InterpolationTarget.transform, followedTransform: CurrentGrabber.hand.networkTransform.InterpolationTarget.transform, LocalPositionOffset, LocalRotationOffset);
        }

        protected virtual void ExtrapolateWhileTakingAuthority()
        {
            // No need to extrapolate if the object is not really grabbed
            if (grabbable.currentGrabber == null) return;
            NetworkGrabber networkGrabber = grabbable.currentGrabber.networkGrabber;

            // Extrapolation: Make visual representation follow grabber, adding position/rotation offsets
            // We use grabberWhileTakingAuthority instead of CurrentGrabber as we are currently waiting for the authority transfer: the network vars are not already set, so we use the temporary versions
            grabbable.Follow(followingtransform: networkTransform.InterpolationTarget.transform, followedTransform: networkGrabber.hand.networkTransform.InterpolationTarget.transform, grabbable.localPositionOffset, grabbable.localRotationOffset);
        }
    }
}
