using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConstantEnemy : MonoBehaviour
{
    // How quickly player moves forward and back
    public float playerSpeed = 10f;

    // How quickly player rotates (degrees per second)
    public float playerRotation = 180f;

    protected GameObject character;

    IDamage enemyDamage;

    private int health = 5;

    // Use this for initialization
    public virtual void Start()
    {

    }

    // Update is called once per frame
    public virtual void Update()
    {
        character = GameObject.FindGameObjectWithTag("Player");
        Quaternion r = Quaternion.identity;
        if (character != null) r = Quaternion.LookRotation(transform.position - character.transform.position, Vector3.forward);
        r.x = 0f;
        r.y = 0f;

        transform.rotation = Quaternion.Slerp(transform.rotation, r, Time.deltaTime * 4);


    }

    // Returns input values of 0, 1 or -1 based on whether Player tries to move forward or back

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Debug.Log("Reduce Lives");
            Destroy(gameObject);
            GameManager._GameInstance.ReduceHealth();
            TakeDamage(50);
        }
    }

    public void TakeDamage(int d)
    {
        health -= d;
        if(health <= 0)
        {
            Destroy(gameObject);
        }
    }
}

