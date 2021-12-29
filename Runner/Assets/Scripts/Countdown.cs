using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Countdown : GameManager
{
    float startingTime = 25f;
    float currentTime = 0f;

    //private variable
    [SerializeField] Text CountDownTimer;

    // Start is called before the first frame update
    void Start()
    {
        currentTime = startingTime;
    }

    // Update is called once per frame
    void Update()
    {
        currentTime -= 1 * Time.deltaTime;
        print(currentTime);
        CountDownTimer.text = currentTime.ToString("0");
        CountDownTimer.color = Color.blue;
        if (currentTime <= 0)
        {
            CountDownTimer.color = Color.red;
            currentTime = 0;
            base.GameLevel2();
        }
    }
}
