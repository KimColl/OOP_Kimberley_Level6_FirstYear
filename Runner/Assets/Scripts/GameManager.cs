using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement; //is a library unity which allows to manage the scenes
                                   //it is used so that I can load the scenes one after the other

//add something to game manager file not to the class
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
        SceneManager.sceneLoaded += OnSceneLoad;
        DontDestroyOnLoad(this.gameObject);
    }

    public void HighScore()
    {
        if(GameData.PlayerHighScore > PlayerPrefs.GetInt("_PlayerHighScore"))
        {
            PlayerPrefs.SetInt("_PlayerHighScore", GameData.PlayerHighScore);
        }
    }

    public void AddScore()
    {
        GameData.PlayerScore += 1;
        playerScoreText.text = GameData.PlayerScore.ToString();
    }

    public void ReduceHealth()
    {
        GameData.PlayerLives -= 1;
        hscoreText.text = GameData.PlayerLives.ToString();
    }

    // Use this for initialization
    void Start()
    {
        GameData.PlayerScore = 0;
        GameData.PlayerLives = 2;
        GameData.PlayerHighScore = 0;
        GetComponent<SaveLoadManager>().LoadData();
        playerScoreText.text = "Score: " + GameData.PlayerScore.ToString();
        livesText.text = "Lives: " + GameData.PlayerLives.ToString();
        hscoreText.text = "High Score: " + GameData.PlayerHighScore.ToString();
    }

    public void CoinScore()
    {
        GameData.PlayerScore++;
        playerScoreText.text = "Score: " + GameData.PlayerScore.ToString();
        GetComponent<SaveLoadManager>().SaveData();
        if (GameData.PlayerLives < 5)
        {
            GetComponent<SaveLoadManager>().SaveData();
        }
        else
            SceneManager.LoadScene("EndGame");
    }

    public void ConstantEnemyDie()
    {
        SceneManager.LoadScene("EndGame");
        GetComponent<SavingLoading>().SaveData1();
    }

    public void PlayerDie()
    {
        GameData.PlayerLives--;
        livesText.text = "Lives: " + GameData.PlayerLives.ToString();
        if (GameData.PlayerLives > 0)
        {
            Instantiate(playerPrefab, new Vector3(-5f, 0f, 0f), Quaternion.identity);
            GetComponent<SavingLoading>().SaveData1();
        }
        else
            SceneManager.LoadScene("EndGame");
    }

    void OnSceneLoad(Scene scene, LoadSceneMode mode)
    {
        if (scene.name == "GameOver")
        {
            print("Score = " + GameData.PlayerScore.ToString());
            Text scoretext = GameObject.Find("Scoretext").GetComponent<Text>();
            scoretext.text = "Score : " + GameData.PlayerScore.ToString();
            Text highscoretext = GameObject.Find("Highscoretext").GetComponent<Text>();
            highscoretext.text = "High Score : " + GameData.PlayerHighScore.ToString();

            if (GameData.PlayerScore > GameData.PlayerHighScore) GameData.PlayerHighScore = GameData.PlayerScore;
            GameData.PlayerScore = 0;
            GameData.PlayerLives = 2;
            GetComponent<SaveLoadManager>().SaveData();

        }
    }

    public void Welcome() //loads the first scene
    {
        SceneManager.LoadScene(0);
    }

    public void Level1()
    {
        SceneManager.LoadScene("GameScene"); //loads the scene with the name GameScene
    }


    public void GameLevel2()
    {
        SceneManager.LoadScene("GameScene2"); //loads the scene with the name GameScene2 
    }


    public void EndGame()
    {
        SceneManager.LoadScene("EndScene"); //loads the scene with the name EndScene
    }

    public void QuitGame() //will quit the game
    {
        Application.Quit();
        Debug.Log("Quit");
    }

}
