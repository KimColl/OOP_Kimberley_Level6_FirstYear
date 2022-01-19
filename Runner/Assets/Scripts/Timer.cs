using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
    float startingTime = 10f;
    float currentTime = 0f;

    //private variable
    [SerializeField] Text CountDownTimer;

    // Start is called before the first frame update
    protected virtual void Start()
    {
        currentTime = startingTime;
    }

    // Update is called once per frame
    protected virtual void Update()
    {
        currentTime -= 1 * Time.deltaTime;
        print(currentTime);
        CountDownTimer.text = currentTime.ToString("0");
        CountDownTimer.color = Color.blue;
        if (currentTime <= 1)
        {
            CountDownTimer.color = Color.red;
            currentTime = 0;
            SceneManager.LoadScene("GameScene2");
        }
    }
}
