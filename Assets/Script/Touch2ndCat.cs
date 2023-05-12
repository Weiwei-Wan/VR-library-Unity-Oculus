using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Touch2ndCat : MonoBehaviour
{
    //bool isTouched = false;
    private Animator ani2;
    // Start is called before the first frame update
    void Start()
    {
        ani2 = GetComponent<Animator>();
    }

    public void TouchTheCat() {
        ani2.enabled = !ani2.enabled;
    }
}
