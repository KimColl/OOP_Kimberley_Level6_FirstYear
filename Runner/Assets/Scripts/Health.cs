using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : MonoBehaviour
{
    // public int playerNumber = 1;

    [SerializeField] int intialHealth = 10;

    private int nowHealth;

    private GameManager gameManager;

    // Use this for initialization
    void Start()
    {
        Debug.Log(nowHealth);
        nowHealth = intialHealth;
        gameManager = FindObjectOfType<GameManager>();

    }

    public void TakeDamage()
    {
        nowHealth--;
        Debug.Log(nowHealth);

        if (nowHealth <= 0)
        {
            if (gameObject.tag == "Coin" && gameManager != null) gameManager.CoinScore();
            if (gameObject.tag == "Player" && gameManager != null) gameManager.PlayerDie();
            if (gameObject.tag == "ConstantEnemy" && gameManager != null) gameManager.ConstantEnemyDie();
            Die();
        }
    }

    public void Die()
    {
        Destroy(gameObject);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
