using System.Collections;
using System.Collections.Generic;
using UnityEditorInternal;
using UnityEngine;
using UnityEngine.UI;

public class SplashScreen : MonoBehaviour
{
    [SerializeField] private Button playButton;

    private void Start()
    {
        playButton.onClick.RemoveAllListeners();
        playButton.onClick.AddListener(()=>
        {
            OnPlaybuttonclick();
        });
    }

    private void OnPlaybuttonclick()
    {
        GameStateMachine.Instance.ChangeState(GameState.Game);
    }
}
