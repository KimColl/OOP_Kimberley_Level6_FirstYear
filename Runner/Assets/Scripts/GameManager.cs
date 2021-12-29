using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement; //is a library unity which allows to manage the scenes
                                   //it is used so that I can load the scenes one after the other

public class GameManager : MonoBehaviour
{
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
