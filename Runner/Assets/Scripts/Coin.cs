using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    [SerializeField] [Range(0, 1)] float coinSoundEffect = 0.75f;

    [SerializeField] AudioClip coinSound;

    private GameManager gameManagerCoin;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            print("Destroy Coin");
            Destroy(gameObject);
            AudioSource.PlayClipAtPoint(coinSound, Camera.main.transform.position, coinSoundEffect);
            gameManagerCoin.CoinScore();
        }
    }

}

