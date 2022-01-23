using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ButtonManager2 : MonoBehaviour
{
    //Make sure to attach these Buttons in the Inspector
    [SerializeField] Button welcomeButton, level1Button, quitButton;

    void Start()
    {
        //Calls the Welcome/StartGame/QuitGame method when you click the Button
        welcomeButton.onClick.AddListener(Welcome);
        level1Button.onClick.AddListener(StartGame);
        quitButton.onClick.AddListener(QuitGame);

    }

    private void Welcome()
    {
        //Output this to console when Button1 is clicked
        Debug.Log("Welcome - Game Runner");
        SceneManager.LoadScene("WelcomeScene");
    }

    private void StartGame()
    {
        //Output this to console when Button2 is clicked
        Debug.Log("Game - Play Level 1");
        SceneManager.LoadScene("GameScene");
    }


    private void QuitGame()
    {

        //Output this to console when Button3 is clicked
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
