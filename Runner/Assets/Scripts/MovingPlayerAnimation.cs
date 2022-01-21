using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingPlayerAnimation : MonoBehaviour
{
    Animator a;

    // Start is called before the first frame update
    void Start()
    {
        a = GetComponent<Animator>();
    }

    private void OnCollisionEnter2D()
    {
        a.SetBool("PlayerAnimation", true);
    }
}
