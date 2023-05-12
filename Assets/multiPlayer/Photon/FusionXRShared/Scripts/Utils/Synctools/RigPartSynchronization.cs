using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Fusion.XR.Shared.Rig
{
    /**
     * When teleporting (moving by a large amount immediatly) a network transform having network transform childs,
     *  depending on which child is synched first, during one frame the child network transform may be placed at a wrong position,
     *  (for instance, if the child move first, then the parent, it will ofset the child until it produces a new position update)
     *  and so their interpolation may act strange for a few frame.
     * This class prevent this behaviour for the NetworkRig childs, by freezing the child positions at their good offset relatively to their parent, during the teleportation resync (it won't be needed anymore in  future Fusion versions)
     * The headset position is used as the reference here to detect when if desync occurs.
     */
    [RequireComponent(typeof(NetworkRig))]
    [OrderAfter(typeof(NetworkTransform), typeof(NetworkRigidbody), typeof(NetworkRig) /* Add here any component that could change rig parts position */)]
    public class RigPartSynchronization : NetworkBehaviour
    {
        [System.Serializable]
        public struct RigPartsLocalPosition
        { 
            public Vector3 localHeadPosition;
            public Vector3 localLeftHandPosition;
            public Vector3 localRightPosition;
        }

        [SerializeField]
        private RigPartsLocalPosition localInterpolationTargetsPositions;
        [SerializeField]
        private Vector3 previousHeadLocalPosition;

        [SerializeField]
        private Vector3 previousHeadVisualLocalPosition;

        public float teleportTriggerDistanceSqr = 0.25f;// 50 cm
        public float interpolationResyncDistanceSqr = 0.01f;// 10 cm

        public int resyncTimeoutDelay = 2;
        public int resyncInterpolationTimeoutDelay = 2;

        public bool resyncEnabled = true;
        NetworkRig rig;
        private void Awake()
        {
            rig = GetComponent<NetworkRig>();
        }

        [SerializeField]
        float startResyncTime = -1;
        [SerializeField]
        float startInterpolationResyncTime = -1;

        public enum Status
        {
            Init,
            Normal,
            Resync,
            ResyncInterpolation
        }

        public Status status = Status.Init;

        void FreezeRigParts()
        {
            rig.headset.networkTransform.InterpolationTarget.position = rig.networkTransform.InterpolationTarget.TransformPoint(localInterpolationTargetsPositions.localHeadPosition);
            rig.leftHand.networkTransform.InterpolationTarget.position = rig.networkTransform.InterpolationTarget.TransformPoint(localInterpolationTargetsPositions.localLeftHandPosition);
            rig.rightHand.networkTransform.InterpolationTarget.position = rig.networkTransform.InterpolationTarget.TransformPoint(localInterpolationTargetsPositions.localRightPosition);

            previousHeadVisualLocalPosition = rig.networkTransform.InterpolationTarget.InverseTransformPoint(rig.headset.networkTransform.InterpolationTarget.position);
        }

        public override void Render()
        {
            base.Render();

            // If a large LOCAL move is detected for a rig part (headset, as hands might themselves teleport in desktop mode) => consider we have a teleport
            // It is due to a rig teleport, without the headset position update being received during the same tick
            var localHeadPosition = transform.InverseTransformPoint(rig.headset.transform.position);
            var visualHeadLocalPosition = rig.networkTransform.InterpolationTarget.InverseTransformPoint(rig.headset.networkTransform.InterpolationTarget.position);
            var visualHeadMoveSqr = (visualHeadLocalPosition - previousHeadVisualLocalPosition).sqrMagnitude;
            bool positionDesync = (localHeadPosition - previousHeadLocalPosition).sqrMagnitude > teleportTriggerDistanceSqr; 
            bool visualDesync = visualHeadMoveSqr > teleportTriggerDistanceSqr;
            bool desync = positionDesync || visualDesync;

            // Transition between states
            switch (status)
            {
                case Status.Init:
                    previousHeadLocalPosition = localHeadPosition;
                    previousHeadVisualLocalPosition = rig.networkTransform.InterpolationTarget.InverseTransformPoint(rig.headset.networkTransform.InterpolationTarget.position);
                    status = Status.Normal;
                    break;

                case Status.Normal:
                    if (resyncEnabled && desync)
                    {
                        status = Status.Resync;
                        if (startResyncTime == -1) startResyncTime = Time.time;
                    }
                    break;

                case Status.Resync:
                    bool resyncTimeout = startResyncTime != -1 && (Time.time - startResyncTime) > resyncTimeoutDelay;
                    if (!positionDesync)
                    {
                        status = Status.ResyncInterpolation;
                        startInterpolationResyncTime = Time.time;
                        startResyncTime = -1;
                    }
                    else if (resyncTimeout)
                    {
                        status = Status.Normal;
                        startResyncTime = -1;
                    }
                    break;

                case Status.ResyncInterpolation:
                    bool interpolationResyncTimeout = startInterpolationResyncTime != -1 && (Time.time - startInterpolationResyncTime) > resyncInterpolationTimeoutDelay;

                    if (visualHeadMoveSqr < interpolationResyncDistanceSqr)
                    {
                        status = Status.Normal;
                        startInterpolationResyncTime = -1;
                    }
                    else if (interpolationResyncTimeout)
                    {
                        status = Status.Normal;
                        startInterpolationResyncTime = -1;
                    }
                    break;
            }

            // Action to do during each states
            if (status == Status.Resync)
            {
                // Until we have a headset update, we freeze rig parts to their latest local position
                FreezeRigParts();
            }

            if (status == Status.ResyncInterpolation)
            {
                FreezeRigParts();
            }

            if (status == Status.Normal && resyncEnabled)
            {
                var headVisualLocalPosition = rig.networkTransform.InterpolationTarget.InverseTransformPoint(rig.headset.networkTransform.InterpolationTarget.position);

                // Normal mode: we save the local position
                localInterpolationTargetsPositions.localHeadPosition = headVisualLocalPosition;
                localInterpolationTargetsPositions.localLeftHandPosition = rig.networkTransform.InterpolationTarget.InverseTransformPoint(rig.leftHand.networkTransform.InterpolationTarget.position);
                localInterpolationTargetsPositions.localRightPosition = rig.networkTransform.InterpolationTarget.InverseTransformPoint(rig.rightHand.networkTransform.InterpolationTarget.position);

                previousHeadLocalPosition = localHeadPosition;

                // We try to detect an early move of the headset visual: it may be aware of the move before the actual headset moves
                if ((headVisualLocalPosition - previousHeadVisualLocalPosition).sqrMagnitude > teleportTriggerDistanceSqr)
                {
                    rig.headset.networkTransform.InterpolationTarget.position = rig.networkTransform.InterpolationTarget.TransformPoint(previousHeadLocalPosition);
                }

                previousHeadVisualLocalPosition = headVisualLocalPosition;
            }
        }
    }
}
