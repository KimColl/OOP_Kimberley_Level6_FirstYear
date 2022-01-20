using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootingEnemy : MonoBehaviour
{
    public GameObject laser;

    public Transform fire;

    public float laserForce = 20;

    Coroutine enemyFire;

    // Start is called before the first frame update
    void Start()
    {
        enemyFire = StartCoroutine(FireLasers());
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator FireLasers()
    {
        while (true)
        {
            float timer = 3f;
            GameObject enemyLaser = Instantiate(laser, fire.position, transform.rotation);

            Rigidbody2D enemy = enemyLaser.GetComponent<Rigidbody2D>();

            enemy.AddForce(transform.up * laserForce);
            yield return new WaitForSeconds(timer);
        }

    }
}
