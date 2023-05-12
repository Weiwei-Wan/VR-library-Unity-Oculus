using UnityEngine.InputSystem;
using UnityEngine;
using Fusion.XR.Shared.Rig;
using Fusion.XR.Shared.Grabbing;
using Fusion.XR.Shared.Grabbing.NetworkHandColliderBased;

namespace Fusion.XR.Shared.Desktop
{    
    public interface IMouseTeleportHover
    {
        void OnHoverHit(RaycastHit hit);
        void OnNoHover();
    }

    /**
     * Allow to rotate the rig head with the mouse
     * Allow to left click to teleport to a valid target
     * Allow to have partial interaction capability 
     */
    public class MouseTeleport : MonoBehaviour
    {
        public HardwareRig rig;
        public Camera mouseCamera;
        public Vector3 defaultLeftHandPosition;
        public Vector3 defaultRightHandPosition;
        public Quaternion defaultLeftHandRotation;
        public Quaternion defaultRightHandRotation;
        public bool forceFirstPersonView = false;
        public DesktopController hardwareRigControl;
        public HardwareHand grabberHand;
        public HardwareHand beamerHand;
        public RayBeamer rayBeamer;
        GameObject grabbed = null;

        public IMouseTeleportHover hoverListener;

        float grabHandDistance = 0;
        Transform Head => rig == null ? null : rig.headset.transform;
        protected virtual void Awake()
        {
            hardwareRigControl = GetComponentInParent<DesktopController>();

            if (mouseCamera == null) mouseCamera = GetComponentInChildren<Camera>();
            if (rig == null) rig = GetComponentInParent<HardwareRig>();

            defaultLeftHandPosition = Head.InverseTransformPoint(rig.leftHand.transform.position);
            defaultRightHandPosition = Head.InverseTransformPoint(rig.rightHand.transform.position);
            defaultLeftHandRotation = Quaternion.Inverse(Head.rotation) * rig.leftHand.transform.rotation;
            defaultRightHandRotation = Quaternion.Inverse(Head.rotation) * rig.rightHand.transform.rotation;
        }

        void Start()
        {
            if (forceFirstPersonView)
            {
                mouseCamera.transform.position = Head.position;
                mouseCamera.transform.rotation = Head.rotation;
            }

            // grab and teleport are done with left hand
            grabberHand = rig.leftHand;
            beamerHand = rig.leftHand;
            rayBeamer = rig.leftHand.GetComponentInChildren<RayBeamer>();
        }



        bool CheckGrab(Ray mouseRay)
        {
            bool didTouch = false;

            // No teleport/click when right click is pressed. Only rotation
            if (!Mouse.current.rightButton.isPressed && Mouse.current.leftButton.isPressed)
            {
                if (Physics.Raycast(mouseRay, out RaycastHit hit, 40f))
                {
                    // check if there is already a grabbed object
                    if (grabbed == null)
                    {
                        // check if the hit object can be grab
                        GameObject grabbableObject = null;
                        var grabbable = hit.collider.GetComponentInParent<Grabbable>();
                        if (grabbable)
                        {
                            grabbableObject = grabbable.gameObject;
                        }
                        else
                        {
                            var networkGrabbable = hit.collider.GetComponentInParent<NetworkHandColliderGrabbable>();
                            if (networkGrabbable)
                            {
                                grabbableObject = networkGrabbable.gameObject;
                            }
                        }
                        if (grabbableObject != null)
                        {
                            // the ray hit a grabbable object
                            didTouch = true;
                            grabbed = grabbableObject;

                            // do not display the ray
                            rayBeamer.CancelHit();

                            // We move the local hand to the hit position, and active isGrabbing
                            grabberHand.transform.position = hit.point;
                            grabberHand.isGrabbing = true;
                            grabHandDistance = (hit.point - mouseRay.origin).magnitude;


                            // TO DO Update the position of the grabbed object
                        }
                    }
                }
            }
            return didTouch;
        }

        void CheckUngrab()
        {
            // Check if we should ungrab
            if (!Mouse.current.leftButton.wasReleasedThisFrame && !Mouse.current.leftButton.isPressed)
            {
                if (grabbed != null)
                {
                    grabbed = null;
                    grabberHand.isGrabbing = false;
                }
            }
        }

        Vector3 SearchTarget(Ray mouseRay)
        {
            var target = mouseRay.origin + mouseRay.direction * 20;
            if (rayBeamer.BeamCast(out RaycastHit hit, mouseRay.origin, mouseRay.direction))
            {
                target = hit.point;
                if (hoverListener != null) hoverListener.OnHoverHit(hit);
            }
            else
            {
                if (hoverListener != null) hoverListener.OnNoHover();
            }
            return target;
        }

        protected virtual void Update()
        {
            rayBeamer.isRayEnabled = false;
            if (grabbed == null) grabHandDistance = 0;
            var mouseRay = mouseCamera.ScreenPointToRay(Mouse.current.position.ReadValue());

            // Check if the mouse hit a grabbable object
            bool didTouch = CheckGrab(mouseRay);
            bool beamerRotationHandled = false;
            bool grabberHandPositionHandled = didTouch;
            CheckUngrab();

            Vector3 target = Vector3.zero;
            bool targetSearched = false;
            if (hoverListener != null)
            {
                // If a hover listener expect to know if a hover occured, we have to check whatever buttons are clicked
                target = SearchTarget(mouseRay);
                targetSearched = true;
            }

            if(!didTouch && grabbed == null && Mouse.current.rightButton.isPressed == false)
            {
                if (Mouse.current.leftButton.isPressed || Mouse.current.leftButton.wasReleasedThisFrame)
                {
                    rayBeamer.isRayEnabled = true;
                    if(targetSearched == false)
                    {
                        target = SearchTarget(mouseRay);
                    }

                    beamerRotationHandled = true;
                    var currentBeamLocalRotation = Quaternion.Inverse(beamerHand.transform.rotation) * rayBeamer.origin.rotation;
                    var beamRotation = Quaternion.LookRotation(target - rayBeamer.origin.position);
                    // Explanation:
                    // We have: beamerHand.transform.rotation * currentBeamLocalRotation = rayBeamer.origin.rotation
                    // We want: rayBeamer.origin.rotation = beamRotation;
                    // So beamerHand.transform.rotation * currentBeamLocalRotation = beamRotation
                    // So beamerHand.transform.rotation * currentBeamLocalRotation * Quaternion.Inverse(currentBeamLocalRotation) = beamRotation * Quaternion.Inverse(currentBeamLocalRotation)
                    // So beamerHand.transform.rotation * Quaternion.Identity = beamRotation * Quaternion.Inverse(currentBeamLocalRotation). Simplified to:
                    beamerHand.transform.rotation = beamRotation * Quaternion.Inverse(currentBeamLocalRotation);
                }
            }

            rig.rightHand.transform.position = Head.TransformPoint(defaultRightHandPosition);
            rig.rightHand.transform.rotation = Head.rotation * defaultLeftHandRotation;

            if (grabbed != null)
            {
                grabberHandPositionHandled = true;
                rig.leftHand.transform.position = mouseRay.origin + mouseRay.direction * grabHandDistance;
            }

            if (!grabberHandPositionHandled)
            {
                var leftHandPosition = Head.TransformPoint(defaultLeftHandPosition) + mouseRay.direction * handRange;
                if ((leftHandPosition - rig.leftHand.transform.position).sqrMagnitude < 1f)
                {
                    leftHandPosition = Vector3.Lerp(rig.leftHand.transform.position, leftHandPosition, 30f * Time.deltaTime);
                }
                rig.leftHand.transform.position = leftHandPosition;
            }
            if (!beamerRotationHandled)
            {
                rig.leftHand.transform.LookAt(mouseRay.origin + mouseRay.direction * 100f);
                rig.leftHand.transform.Rotate(-40, 0, 0);
            }
        }
        float handRange = 0.7f;
    }

}