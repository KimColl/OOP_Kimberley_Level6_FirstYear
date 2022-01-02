using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement; //is a library unity which allows to manage the scenes
                                   //it is used so that I can load the scenes one after the other

////add something to game manager file not to the class
//public interface IDamage //interfces. Use I to indicate that it is an interface
//{
//    int playerHealth { get; set; } //can write and read from it

//    void PlayerDamage(int damage);
//}

public class GameManager : MonoBehaviour
{
    //public static GameManager _GameInstance;

    ////the awake method will still run if the camera is disabled but the start will not run if the camera is disabled
    //private void Awake()
    //{
    //    if(_GameInstance == null) //singleton pattern
    //    {
    //        _GameInstance = this;
    //    }
    //    else if(_GameInstance != this)
    //    {
    //        Destroy(this.gameObject);
    //    }
    //}
    //it will load the first scene of the project
    public void StartScene()
    {
        //SceneManager will be used so it can read the scenes which are in unity
        SceneManager.LoadScene("WelcomeScene");
        //LoadScene is a method
    }

    //loads the scene with the name of GameScene
    public void Game()
    {
        SceneManager.LoadScene("GameScene");
    }

    //loads the scene with the name of GameScene2
    public void GameLevel2()
    {
        SceneManager.LoadScene("GameScene2");
    }

    //loads the scene with the name of EndScene
    public void EndGame()
    {
        SceneManager.LoadScene("EndScene");
    }

    public void QuitGame()
    {
        Application.Quit();
        Debug.Log("Quit");
    }
}
