using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WalkingController : MonoBehaviour
{
    [SerializeField]
    private float speedMinimum = 0.05f;
    [SerializeField, Range(0,1)]
    private float lerpFactor = 0.3f;

    private Animator animator;
    private HeadBodyRig rig;
    private Transform headTarget;
    private Vector3 previousPosition;

    private void Start()
    {
        animator = GetComponent<Animator>();
        rig = GetComponent<HeadBodyRig>();
        headTarget = rig.head.VRTarget;
        previousPosition = headTarget.position;
    }

    private void FixedUpdate()
    {
        Vector3 headSpeed = (headTarget.position - previousPosition) / Time.deltaTime;
        headSpeed.y = 0;
        Vector3 localHeadSpeed = transform.InverseTransformDirection(headSpeed);
        previousPosition = headTarget.position;

        float previousX = animator.GetFloat("x");
        float previousY = animator.GetFloat("y");

        animator.SetBool("isWalking", localHeadSpeed.magnitude > speedMinimum);
        animator.SetFloat("x", Mathf.Lerp(previousX, Mathf.Clamp(localHeadSpeed.x, -1, 1), lerpFactor));
        animator.SetFloat("y", Mathf.Lerp(previousY, Mathf.Clamp(localHeadSpeed.z, -1, 1), lerpFactor));
    }
}
