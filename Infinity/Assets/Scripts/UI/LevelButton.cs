using UnityEngine;
using UnityEngine.UI;

public class LevelButton : MonoBehaviour
{
    public int levelIndex;
    [SerializeField] private Text levelIndextext;
    [SerializeField] private Button button;
    [SerializeField] private Image lockIcon;
    [SerializeField] private Image playIcon;
    [SerializeField] private Image tickIcon;

    public void Initialize(int levelIndex, bool isUnlocked)
    {
        this.levelIndex = levelIndex;
        levelIndextext.text = (levelIndex + 1).ToString();
        button.interactable = isUnlocked;
        lockIcon.enabled = !isUnlocked;

        bool isCompleted = isUnlocked && PlayerProgressManager.Instance.progress.highestLevelUnlocked > levelIndex;

        //Debug.Log(levelIndex + " " + isUnlocked + " " + isCompleted + " max: " + PlayerProgressManager.Instance.progress.highestLevelUnlocked);

        playIcon.enabled = isUnlocked && !isCompleted;
        tickIcon.enabled = isCompleted;

        button.onClick.AddListener(() =>
        {
            if (isUnlocked)
                GameManager.Instance.StartLevel(levelIndex);
        });
    }
}