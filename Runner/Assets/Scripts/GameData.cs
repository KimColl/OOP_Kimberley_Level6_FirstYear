using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameData : MonoBehaviour
{
    //The below float methids are going to be used so that the player will not pass the camera points
    public static float XMin() //statics make an attribute/method class level.. no need of objects
    {
        float XMin = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).x;
        return XMin;
    }

    public static float XMax() //class methods not object methods
    {
        float XMax = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, 0)).x;
        return XMax;
    }

    public static float YMin()
    {
        float YMin = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).y;
        return YMin;
    }

    public static float YMax()
    {
        float YMax = Camera.main.ViewportToWorldPoint(new Vector3(0, 1, 0)).y;
        return YMax;
    }
}
