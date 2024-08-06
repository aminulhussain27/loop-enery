using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStateMachine : MonoBehaviour
{
    public static GameStateMachine Instance;
    private GameState currentState;

    public GameState CurrentState => currentState;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void ChangeState(GameState newState)
    {
        if (currentState != newState)
        {
            StartCoroutine(TransitionToState(newState));
        }
    }

    private IEnumerator TransitionToState(GameState newState)
    {
        if (currentState != GameState.Game)
        {
            Debug.Log("Unloading: " + currentState.ToString());
            yield return SceneManager.UnloadSceneAsync(currentState.ToString());
        }

        yield return SceneManager.LoadSceneAsync(newState.ToString(), LoadSceneMode.Single);

        currentState = newState;
    }
}

public enum GameState
{
    Splash,
    Game,
    MainMenu,
    Gameover
}
