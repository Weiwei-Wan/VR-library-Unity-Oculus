using Fusion;
using Fusion.XR.Shared.Rig;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Fusion.XR.Shared.Grabbing
{
    /**
     * Networked version of the local Grabber.
     * This networked version is needed to expose the networkTransform to the grabbing logic, to extrapolate properly the visuals (interpolation targets)
     **/

    [RequireComponent(typeof(NetworkHand))]
    [OrderAfter(typeof(NetworkHand))]
    public class NetworkGrabber : NetworkBehaviour
    {
        [HideInInspector]
        public NetworkHand hand;
        public override void Spawned()
        {
            base.Spawned();
            hand = GetComponentInParent<NetworkHand>();
            if (hand.IsLocalNetworkRig)
            {
                // References itself in its local counterpart, to simplify the lookup during local grabbing
                if (hand.LocalHardwareHand)
                {
                    Grabber grabber = hand.LocalHardwareHand.GetComponentInChildren<Grabber>();
                    grabber.networkGrabber = this;
                }
            }
        }
    }
}
