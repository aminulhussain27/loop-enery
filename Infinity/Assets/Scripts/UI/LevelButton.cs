using UnityEngine;
using UnityEngine.UI;

public class LevelButton : MonoBehaviour
{
    public int levelIndex;
    [SerializeField] private Text levelIndextext;
    [SerializeField] private Button button;
    [SerializeField] private Image lockIcon;
    [SerializeField] private Image playIcon;

    public void Initialize(int levelIndex, bool isUnlocked)
    {
        this.levelIndex = levelIndex;
        levelIndextext.text = (levelIndex + 1).ToString();
        button.interactable = isUnlocked;
        lockIcon.enabled = !isUnlocked;
        playIcon.enabled = isUnlocked;

        button.onClick.AddListener(() =>
        {
            if (isUnlocked)
                GameManager.Instance.StartLevel(levelIndex);
        });
    }
}