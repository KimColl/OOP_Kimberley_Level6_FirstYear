using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Countdown2 : GameManager
{
    float Timestarting = 25f;
    float actualTime = 0f;

    //private variable
    [SerializeField] Text CountDownTimer;

    // Start is called before the first frame update
    void Start()
    {
        actualTime = Timestarting;
    }

    // Update is called once per frame
    void Update()
    {
        actualTime -= 1 * Time.deltaTime;
        print(actualTime);
        CountDownTimer.text = actualTime.ToString("0");
        CountDownTimer.color = Color.blue;
        if (actualTime <= 0)
        {
            CountDownTimer.color = Color.red;
            actualTime = 0;
            base.EndGame();
        }
    }
}
