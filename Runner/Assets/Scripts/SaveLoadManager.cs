using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveLoadManager : MonoBehaviour
{
    SerializedData myserializedData;
    public void Start()
    {
        myserializedData = new SerializedData();
    }
    public void SaveMyData()
    {
        myserializedData.ser_PlayerScore = GameData.PlayerScore;
        myserializedData.ser_PlayerLives = GameData.PlayerLives;
        myserializedData.ser_PlayerHighScore = GameData.PlayerHighScore;

        string jsontosave = JsonUtility.ToJson(myserializedData);
        Debug.Log(jsontosave);
        PlayerPrefs.SetString("RunnerData", jsontosave);

    }

    public void LoadMyData()
    {
        string loadedjson;
        if (PlayerPrefs.HasKey("TanksData"))
        {
            loadedjson = PlayerPrefs.GetString("TanksData");
            myserializedData = JsonUtility.FromJson<SerializedData>(loadedjson);
            GameData.PlayerScore = myserializedData.ser_PlayerScore;
            GameData.PlayerLives = myserializedData.ser_PlayerLives;
            GameData.PlayerHighScore = myserializedData.ser_PlayerHighScore;
        }
    }
}

