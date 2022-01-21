using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ButtonManager2 : MonoBehaviour
{
    //Make sure to attach these Buttons in the Inspector
    [SerializeField] Button welcomeButton, level1Button, quitButton;

    void Start()
    {
        //Calls the TaskOnClick/TaskWithParameters/ButtonClicked method when you click the Button
        welcomeButton.onClick.AddListener(Welcome);
        level1Button.onClick.AddListener(StartGame);
        quitButton.onClick.AddListener(QuitGame);

    }

    void Welcome()
    {
        //Output this to console when Button1 or Button3 is clicked
        Debug.Log("Welcome");
        SceneManager.LoadScene("WelcomeScene");
    }

    void StartGame()
    {
        //Output this to console when Button1 or Button3 is clicked
        Debug.Log("Game!");
        SceneManager.LoadScene("GameScene");
    }


    void QuitGame()
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
