using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public Text levelText;
    [SerializeField] private Text scoreText;
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

        UpdateScore();
    }

    private void OnLevelStart(int obj)
    {
        gridPanel.SetActive(true);
        levelPanel.SetActive(false);
    }

    private void OnLevelComplete(int obj)
    {
        levelText.text = "Level " + (obj +1).ToString() +" Completed";
        StartCoroutine(ShowGameOverPopup());
        UpdateScoreUI();
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

    private void UpdateScoreUI()
    {
        StartCoroutine(ShowScoreUpdateEffect());
    }

    private IEnumerator ShowScoreUpdateEffect()
    {
        float duration = 1.15f;
        int prevScore = PlayerProgressManager.Instance.progress.score - Constants.ScorePerLevelComplete;
        prevScore = prevScore > 0 ? prevScore : 0;
        int endScore = PlayerProgressManager.Instance.progress.score;
        float elapsed = 0f;

        while (elapsed < duration)
        {
            elapsed += Time.deltaTime;
            float t = Mathf.Clamp01(elapsed / duration);
            int newScore = Mathf.RoundToInt(Mathf.Lerp(prevScore, endScore, t));
            scoreText.text = newScore.ToString();
            yield return null;
        }

        UpdateScore();
    }

    private void UpdateScore()
    {
        scoreText.text = PlayerProgressManager.Instance.progress.score.ToString();
    }
}
