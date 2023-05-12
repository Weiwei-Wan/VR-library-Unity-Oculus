using Fusion;
using Fusion.XR.Shared.Rig;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fusion.XR.Shared.Grabbing.NetworkHandColliderBased
{
    /**
     * 
     * Allows a NetworkHand to grab NetworkHandColliderGrabbable objects
     * 
     **/

    [RequireComponent(typeof(NetworkHand))]
    [OrderAfter(typeof(NetworkHand))]
    public class NetworkHandColliderGrabber : NetworkBehaviour
    {
        [Networked]
        public NetworkHandColliderGrabbable GrabbedObject { get; set; }

        [HideInInspector]
        public NetworkHand hand;
        private void Awake()
        {
            hand = GetComponentInParent<NetworkHand>();
        }

        Collider lastCheckedCollider;
        NetworkHandColliderGrabbable lastCheckColliderGrabbable;

        private void OnTriggerStay(Collider other)
        {
            // We only trigger grabbing for our local hands
            if (!hand.IsLocalNetworkRig || !hand.LocalHardwareHand) return;

            // Exit if an object is already grabbed
            if (GrabbedObject != null)
            {
                // It is already the grabbed object or another, but we don't allow shared grabbing here
                return;
            }

            NetworkHandColliderGrabbable grabbable;

            if (lastCheckedCollider == other)
            {
                grabbable = lastCheckColliderGrabbable;
            } 
            else
            {
                grabbable = other.GetComponentInParent<NetworkHandColliderGrabbable>();
            }
            // To limit the number of GetComponent calls, we cache the latest checked collider grabbable result
            lastCheckedCollider = other;
            lastCheckColliderGrabbable = grabbable;
            if (grabbable != null)
            {
                if (hand.LocalHardwareHand.isGrabbing) Grab(grabbable);
            } 
        }

        // Ask the grabbable object to start following the hand
        public void Grab(NetworkHandColliderGrabbable grabbable)
        {
            Debug.Log($"Try to grab object {grabbable.gameObject.name} with {gameObject.name}");
            grabbable.Grab(this);
            GrabbedObject = grabbable;
        }

        // Ask the grabbable object to stop following the hand
        public void Ungrab(NetworkHandColliderGrabbable grabbable)
        {
            Debug.Log($"Try to ungrab object {grabbable.gameObject.name} with {gameObject.name}");
            GrabbedObject.Ungrab();
            GrabbedObject = null;
        }

        
        private void Update()
        {
            if (!hand.IsLocalNetworkRig || !hand.LocalHardwareHand) return;

            // Check if the local hand is still grabbing the object
            if (GrabbedObject != null && !hand.LocalHardwareHand.isGrabbing)
            {
                // Object released by this hand
                Ungrab(GrabbedObject);
            }
        }
    }
}
