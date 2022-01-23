using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ButtonManager : MonoBehaviour
{
    //Make sure to attach these Buttons in the Inspector
    [SerializeField] Button gameButton, gameButton2, quitButton;

    void Start()
    {
        //Calls the TaskOnClick/TaskWithParameters/ButtonClicked method when you click the Button
        gameButton.onClick.AddListener(StartGame);
        gameButton2.onClick.AddListener(Level2);
        quitButton.onClick.AddListener(QuitGame);

    }

    private void StartGame()
    {
        //Output this to console when Button1 or Button3 is clicked
        Debug.Log("Game!");
        SceneManager.LoadScene("GameScene");
    }

    private void Level2()
    {
        //Output this to console when Button1 or Button3 is clicked
        Debug.Log("Game - Level2");
        SceneManager.LoadScene("GameScene2");
    }

    private void QuitGame()
    {

        //Output this to console when Button1 is clicked
        Debug.Log("You have clicked the quit button!");
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#elif UNITY_WEBPLAYER
         Application.OpenURL(webplayerQuitURL);
#else
         Application.Quit();
#endif



    }


}     