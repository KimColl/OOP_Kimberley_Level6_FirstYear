using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveLoadManager : MonoBehaviour
{
    SerializedData serializedData;
    public void Start()
    {
        serializedData = new SerializedData();
    }

    public void SaveData()
    {
        serializedData.ser_PlayerScore = GameData.PlayerScore;
        serializedData.ser_PlayerLives = GameData.PlayerLives;
        serializedData.ser_PlayerHighScore = GameData.PlayerHighScore;

        string s = JsonUtility.ToJson(serializedData);
        Debug.Log(s);
        PlayerPrefs.SetString("RunnerData", s);

    }

    public void LoadData()
    {
        string loadedjsonData;
        if (PlayerPrefs.HasKey("RunnerData"))
        {
            loadedjsonData = PlayerPrefs.GetString("RunnerData");
            serializedData = JsonUtility.FromJson<SerializedData>(loadedjsonData);
            GameData.PlayerScore = serializedData.ser_PlayerScore;
            GameData.PlayerLives = serializedData.ser_PlayerLives;
            GameData.PlayerHighScore = serializedData.ser_PlayerHighScore;
        }
    }

}

