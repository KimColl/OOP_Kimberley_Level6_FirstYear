using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameData : MonoBehaviour
{
    //The below float variables are going to be used so that the player will not pass the camera points
    float XMin, XMax, YMin, YMax;

    // Start is called before the first frame update
    void Start()
    {
        //The player will not pass the camera main points
        XMin = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).x;
        XMax = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, 0)).x;
        YMin = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).y;
        YMax = Camera.main.ViewportToWorldPoint(new Vector3(0, 1, 0)).y;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
