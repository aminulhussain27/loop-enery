using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public static LevelManager Instance;

    public Levels levels;

    [SerializeField] private Transform levelGridParent;
    [SerializeField] private GameObject levelButtonPrefab;

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
        LoadLevelData();
        DisplayLevelButtons();
    }

    private void LoadLevelData()
    {
        TextAsset jsonData = Resources.Load<TextAsset>("LevelData");
        if (jsonData != null)
        {
            levels = JsonUtility.FromJson<Levels>(jsonData.text);
            Debug.Log("Level data loaded successfully.");
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
            bool isUnlocked = i < PlayerProgressManager.Instance.progress.highestLevelUnlocked;
            levelButton.Initialize(i, isUnlocked);
        }
    }
}
