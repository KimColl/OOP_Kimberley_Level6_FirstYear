using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class SavingLoading : MonoBehaviour
{
    void Start()
    {
        try
        {
            LoadData1();
        }
        catch
        {
            Debug.Log("Exception caught");
        }
    }

    public void SaveData1()
    {
        SerializedData serializedData = new SerializedData();

        serializedData.ser_PlayerScore = GameData.PlayerScore;
        serializedData.ser_PlayerLives = GameData.PlayerLives;
        serializedData.ser_PlayerHighScore = GameData.PlayerHighScore;

        BinaryFormatter f = new BinaryFormatter();

        Debug.Log(Application.persistentDataPath);
        FileStream files = File.Create(Application.persistentDataPath + "/gamedata.save");

        f.Serialize(files, serializedData);
        files.Close();

        Debug.Log("Game Data Saved");
    }


    public void LoadData1()
    {
        SerializedData loadedData = new SerializedData();

        // string loadedjson;
        if (File.Exists(Application.persistentDataPath + "/gamedata.save") == true)
        {
            BinaryFormatter b = new BinaryFormatter();
            FileStream filestream = File.Open(Application.persistentDataPath + "/gamedata.save", FileMode.Open);

            loadedData = (SerializedData)b.Deserialize(filestream);
            filestream.Close();

            if (loadedData != null)
            {
                GameData.PlayerScore = loadedData.ser_PlayerScore;
                GameData.PlayerLives = loadedData.ser_PlayerLives;
                GameData.PlayerHighScore = loadedData.ser_PlayerHighScore;
            }
        }
    }
}
