using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public static LevelManager Instance;

    public Levels levels;

    [SerializeField] private Transform levelGridParent;
    [SerializeField] private GameObject levelButtonPrefab;

    private List<LevelButton> allLevelButtons;

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

    private void Start()
    {
        GameManager.Instance.levelCompleteEvent += UpdateLevelButtonsData;
        allLevelButtons = new List<LevelButton>();
        LoadLevelData();
        DisplayLevelButtons();
    }

    private void LoadLevelData()
    {
        TextAsset jsonData = Resources.Load<TextAsset>("LevelData");
        if (jsonData != null)
        {
            levels = JsonUtility.FromJson<Levels>(jsonData.text);
        }
        else
        {
            Debug.LogError("Failed to load level data.");
        }
    }

    private void DisplayLevelButtons()
    {
        for (int i = 0; i < levels.levels.Length; i++)
        {
            GameObject buttonObject = Instantiate(levelButtonPrefab, levelGridParent);
            LevelButton levelButton = buttonObject.GetComponent<LevelButton>();
            allLevelButtons.Add(levelButton);
            bool isUnlocked = i < PlayerProgressManager.Instance.progress.highestLevelUnlocked;
            levelButton.Initialize(i, isUnlocked);
        }
    }

    private void UpdateLevelButtonsData(int level)
    {
        Debug.Log("Max unlocked: " + PlayerProgressManager.Instance.progress.highestLevelUnlocked);
        if (allLevelButtons != null && allLevelButtons.Count > 0)
        {
            for (int i = 0; i < allLevelButtons.Count; i++)
            {
                allLevelButtons[i].Initialize(i, i < PlayerProgressManager.Instance.progress.highestLevelUnlocked);
            }
        }
    }

    private void OnDestroy()
    {
        GameManager.Instance.levelCompleteEvent -= UpdateLevelButtonsData;
    }
}
