using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement; //is a library unity which allows to manage the scenes
                                   //it is used so that I can load the scenes one after the other

////add something to game manager file not to the class
public interface IDamage //interfces. Use I to indicate that it is an interface
{
    int health { get; set; } //can write and read from it

    void characterDamage(int damage);
}

public class GameManager : MonoBehaviour
{
    [SerializeField] Text playerScoreText;

    [SerializeField] Text livesText;

    [SerializeField] Text hscoreText;

    [SerializeField] GameObject playerPrefab;

    public static GameManager _GameInstance;

    //the awake method will still run if the camera is disabled but the start will not run if the camera is disabled
    private void Awake()
    {
        //to check if the _GameInstance instance already exists
        if (_GameInstance == null) //singleton pattern
        {
            //if not, set the _GameInstance instance to this
            _GameInstance = this;
        }
        //if the _GameInstance instance already exists and it is not this
        else if (_GameInstance != this)
        {
            //then destroy this. 
            //To have one instance of the GameManager script
            Destroy(this.gameObject);
        }
        SceneManager.sceneLoaded += OnSceneLoaded;
        DontDestroyOnLoad(this.gameObject);
    }

    // Use this for initialization
    private void Start()
    {
        GameData.PlayerScore = 0;
        GameData.PlayerLives = 2;
        GameData.PlayerHighScore = 0;
        GetComponent<SaveLoadManager>().LoadMyData();
        playerScoreText.text = "Score: " + GameData.PlayerScore.ToString();
        livesText.text = "Lives: " + GameData.PlayerLives.ToString();
        hscoreText.text = "High Score: " + GameData.PlayerHighScore.ToString();
    }

    public void CoinScore()
    {
        GameData.PlayerScore++;
        playerScoreText.text = "Score: " + GameData.PlayerScore.ToString();
        GetComponent<SaveLoadManager>().SaveMyData();
    }

    public void ConstantEnemyDie()
    {
        SceneManager.LoadScene("EndGame");
        GetComponent<SaveLoadManager>().SaveMyData();
    }

    public void PlayerDie()
    {
        GameData.PlayerLives--;
        livesText.text = "Lives: " + GameData.PlayerLives.ToString();
        if (GameData.PlayerLives > 0)
        {
            Instantiate(playerPrefab, new Vector3(-5f, 0f, 0f), Quaternion.identity);
            GetComponent<SaveLoadManager>().SaveMyData();
        }
        else
            SceneManager.LoadScene("EndGame");
    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name == "GameOver")
        {
            print("Score = " + GameData.PlayerScore.ToString());
            Text myscoretext = GameObject.Find("Scoretext").GetComponent<Text>();
            myscoretext.text = "Score : " + GameData.PlayerScore.ToString();
            Text myhscoretext = GameObject.Find("Highscoretext").GetComponent<Text>();
            myhscoretext.text = "High Score : " + GameData.PlayerHighScore.ToString();

            if (GameData.PlayerScore > GameData.PlayerHighScore) GameData.PlayerHighScore = GameData.PlayerScore;
            GameData.PlayerScore = 0;
            GameData.PlayerLives = 3;
            GetComponent<SaveLoadManager>().SaveMyData();

        }
    }

    ////it will load the first scene of the project
    //public void StartScene()
    //{
    //    //SceneManager will be used so it can read the scenes which are in unity
    //    SceneManager.LoadScene("WelcomeScene");
    //    //LoadScene is a method
    //}

    ////loads the scene with the name of GameScene
    //public void Game()
    //{
    //    SceneManager.LoadScene("GameScene");
    //}

    ////loads the scene with the name of GameScene2
    //public void GameLevel2()
    //{
    //    SceneManager.LoadScene("GameScene2");
    //}

    ////loads the scene with the name of EndScene
    //public void EndGame()
    //{
    //    SceneManager.LoadScene("EndScene");
    //}

    //public void QuitGame()
    //{
    //    Application.Quit();
    //    Debug.Log("Quit");
    //}
}
