using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ButtonManager : MonoBehaviour
{
    //Make sure to attach these Buttons in the Inspector
    [SerializeField] Button gameButton, endScene, quitButton;

    void Start()
    {
        //Calls the StartGame/EndScene/QuitGame method when you click the Button
        gameButton.onClick.AddListener(StartGame);
        endScene.onClick.AddListener(EndScene);
        quitButton.onClick.AddListener(QuitGame);

    }

    private void StartGame()
    {
        //Output this to console when Button1 is clicked
        Debug.Log("Game - Play Level 1");
        SceneManager.LoadScene("GameScene");
    }

    private void EndScene()
    {
        //Output this to console when Button2 is clicked
        Debug.Log("Game - EndScene");
        SceneManager.LoadScene("EndScene");
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