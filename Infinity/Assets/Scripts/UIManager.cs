using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public Text levelText;
    [SerializeField] private GameObject levelPanel;
    [SerializeField] private GameObject gameOverPanel;
    [SerializeField] private GameObject gridPanel;
    [SerializeField] private Button homeButton;


    private void Start()
    {
        GameManager.Instance.levelCompleteEvent += OnLevelComplete;
        GameManager.Instance.levelStartEvent += OnLevelStart;

        homeButton.onClick.RemoveAllListeners();
        homeButton.onClick.AddListener(() =>
        {
            OnHomeButtonClick();
        });
    }

    private void OnLevelStart(int obj)
    {
        gridPanel.SetActive(true);
        levelPanel.SetActive(false);
    }

    private void OnLevelComplete(int obj)
    {
        levelText.text = "Level " + obj.ToString() +" Completed";
        StartCoroutine(ShowGameOverPopup());
    }

    private void OnHomeButtonClick()
    {
        levelPanel.SetActive(true);
        gridPanel.SetActive(false);
        gameOverPanel.SetActive(false);
    }

    private IEnumerator ShowGameOverPopup()
    {
        yield return new WaitForSeconds(2.8f);
        gameOverPanel.SetActive(true);
    }
}
