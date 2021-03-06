using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : ConstantEnemy
{
    IDamage enemyDamage;

    // Start is called before the first frame update
    public override void Start()
    {
        base.Start();
        enemyDamage = GetComponent<IDamage>();
        enemyDamage.health = 2;
    }

    // Update is called once per frame
    public override void Update()
    {
        base.Update();
        transform.position = Vector3.MoveTowards(transform.position, character.transform.position, 2f * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Debug.Log("Destroy enemy");
            Destroy(gameObject);
            GameManager._GameInstance.ReduceHealth();
        }
    }
}
