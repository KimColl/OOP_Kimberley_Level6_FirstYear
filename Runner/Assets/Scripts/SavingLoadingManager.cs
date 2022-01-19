using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

using System.Runtime.Serialization.Formatters.Binary;

public class SavingLoadingManager : MonoBehaviour
{
    public void SaveMyData()
    {
        SerializedData myserializedData = new SerializedData();


        myserializedData.ser_PlayerScore = GameData.PlayerScore;
        myserializedData.ser_PlayerLives = GameData.PlayerLives;
        myserializedData.ser_PlayerHighScore = GameData.PlayerHighScore;

        BinaryFormatter bf = new BinaryFormatter();

        Debug.Log(Application.persistentDataPath);
        FileStream file = File.Create(Application.persistentDataPath + "/gamedata.save");

        bf.Serialize(file, myserializedData);
        file.Close();

        Debug.Log("GAME SAVED!");



        // string jsontosave = JsonUtility.ToJson(myserializedData);
        // Debug.Log(jsontosave);
        //  PlayerPrefs.SetString("TanksData", jsontosave);

    }


    public void LoadMyData()
    {
        SerializedData myloadedData = new SerializedData();

        // string loadedjson;
        if (File.Exists(Application.persistentDataPath + "/gamedata.save") == true)
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + "/gamedata.save", FileMode.Open);

            myloadedData = (SerializedData)bf.Deserialize(file);
            file.Close();

            if (myloadedData != null)
            {
                GameData.PlayerScore = myloadedData.ser_PlayerScore;
                GameData.PlayerLives = myloadedData.ser_PlayerLives;
                GameData.PlayerHighScore = myloadedData.ser_PlayerHighScore;
            }
        }
    }
}
