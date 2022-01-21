using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class GameData : MonoBehaviour
{
    private static int _PlayerScore;
    private static int _PlayerLives;
    private static int _PlayerHighScore;

    //The below float methods are going to be used so that the player will not pass the camera points
    public static float XMin() //statics make an attribute/method class level.. no need of objects
    {
        float XMin = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).x + 1.0f;
        return XMin;
    }

    public static float XMax() //class methods not object methods
    {
        float XMax = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, 0)).x - 1.0f;
        return XMax;
    }

    public static float YMin()
    {
        float YMin = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, 0)).y + 1.0f;
        return YMin;
    }

    public static float YMax()
    {
        float YMax = Camera.main.ViewportToWorldPoint(new Vector3(0, 1, 0)).y - 1.0f;
        return YMax;
    }

    public static int PlayerScore
    {
        get { return _PlayerScore; }
        set { _PlayerScore = value; }
    }

    public static int PlayerLives
    {
        get { return _PlayerLives; }
        set { _PlayerLives = value; }
    }

    public static int PlayerHighScore
    {
        get { return _PlayerHighScore; }
        set { _PlayerHighScore = value; }
    }

}
