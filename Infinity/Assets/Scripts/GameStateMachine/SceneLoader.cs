using UnityEngine;

public class SceneLoader : MonoBehaviour
{
    [SerializeField] private GameStateMachine gameStateMachine;

    public void LoadMainGame()
    {
        gameStateMachine.ChangeState(GameState.Game);
    }


    public void LoadGameOver()
    {
        gameStateMachine.ChangeState(GameState.Gameover);
    }
}
