using Fusion.XR.Shared.Rig;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fusion.XR.Shared.Grabbing {

    /**
     * Detect the presence of a grabbable under the hand trigger collider
     * Trigger the grabbing/ungrabbing depending on the hand isGrabbing field
     */
    [RequireComponent(typeof(HardwareHand))]
    public class Grabber : MonoBehaviour
    {
        HardwareHand hand;

        Collider lastCheckedCollider;
        Grabbable lastCheckColliderGrabbable;
        public Grabbable grabbedObject;
        // Will be set by the NetworkGrabber for the local user itself, when it spawns
        public NetworkGrabber networkGrabber;

        private void Awake()
        {
            hand = GetComponentInParent<HardwareHand>();
        }

        private void OnTriggerStay(Collider other)
        {
            // Exit if an object is already grabbed
            if (grabbedObject != null)
            {
                // It is already the grabbed object or another, but we don't allow shared grabbing here
                return;
            }

            Grabbable grabbable;

            if (lastCheckedCollider == other)
            {
                grabbable = lastCheckColliderGrabbable;
            }
            else
            {
                grabbable = other.GetComponentInParent<Grabbable>();
            }
            // To limit the number of GetComponent calls, we cache the latest checked collider grabbable result
            lastCheckedCollider = other;
            lastCheckColliderGrabbable = grabbable;
            if (grabbable != null)
            {
                if (hand.isGrabbing) Grab(grabbable);
            }
        }

        public void Grab(Grabbable grabbable)
        {
            grabbable.Grab(this);
            grabbedObject = grabbable;
        }

        public void Ungrab(Grabbable grabbable)
        {
            grabbedObject.Ungrab();
            grabbedObject = null;
        }
        private void Update()
        {
            // Check if the local hand is still grabbing the object
            if (grabbedObject != null && !hand.isGrabbing)
            {
                // Object released by this hand
                Ungrab(grabbedObject);
            }
        }
    }

}
