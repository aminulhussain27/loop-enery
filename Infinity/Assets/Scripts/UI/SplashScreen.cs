using UnityEngine;
using UnityEngine.UI;

public class SplashScreen : MonoBehaviour
{
    [SerializeField] private Button playButton;

    void Awake()
    {
        playButton.onClick.AddListener(() =>
        {
            OnPlaybuttonclick();
        });
    }

    private void OnPlaybuttonclick()
    {
        GameStateMachine.Instance.ChangeState(GameState.Game);
    }
}
