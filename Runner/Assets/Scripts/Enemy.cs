using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    IDamage enemyDamage;

    // Start is called before the first frame update
    void Start()
    {
        enemyDamage = GetComponent<IDamage>();
        enemyDamage.health = 2;
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "DestroyEnemy")
        {
            Destroy(this.gameObject);
        }

        if (other.gameObject.name.Contains("Bullet")) //arrange
        {
            Destroy(other.gameObject);


            enemyDamage.characterDamage(1);


        }


    }
}
