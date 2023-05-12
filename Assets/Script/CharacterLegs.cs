using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterLegs : MonoBehaviour
{
    private Animator animator;

    [SerializeField]
    private float footOffset = 0;

    private void Start()
    {
        animator = GetComponent<Animator>();
    }

    private void OnAnimatorIK(int layerIndex)
    {
        AvatarIKGoal[] feet = new AvatarIKGoal[] { AvatarIKGoal.LeftFoot, AvatarIKGoal.RightFoot };
        foreach(AvatarIKGoal foot in feet)
        {
            Vector3 footPosition = animator.GetIKPosition(foot);
            RaycastHit hit;
            Physics.Raycast(footPosition + Vector3.up, Vector3.down, out hit);
            animator.SetIKPositionWeight(foot, 1);
            animator.SetIKPosition(foot, hit.point + new Vector3(0, footOffset, 0));
        }
    }
}
