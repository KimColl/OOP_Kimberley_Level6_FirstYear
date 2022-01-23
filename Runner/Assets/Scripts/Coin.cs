using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    [SerializeField] [Range(0, 1)] float coinSoundEffect = 0.75f;

    [SerializeField] AudioClip coinSound;

       private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            Debug.Log("Destroy Coin");
            Destroy(gameObject);
            AudioSource.PlayClipAtPoint(coinSound, Camera.main.transform.position, coinSoundEffect);
            GameManager._GameInstance.AddScore();
        }
    }

}


