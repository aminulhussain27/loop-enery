using System;
using UnityEngine;
public class PlayerProgressManager : MonoBehaviour
{
    public static PlayerProgressManager Instance;
    public PlayerProgress progress;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            LoadProgress();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void LoadProgress()
    {
        string json = PlayerPrefs.GetString(Constants.ProgressSavingKey, "{}");
        progress = JsonUtility.FromJson<PlayerProgress>(json);
    }

    public void SaveProgress(int currentlevel)
    {
        if (progress.highestLevelUnlocked > currentlevel)
            progress.highestLevelUnlocked++;
        progress.score += Constants.ScorePerLevelComplete;

        string json = JsonUtility.ToJson(progress);
        PlayerPrefs.SetString(Constants.ProgressSavingKey, json);
        PlayerPrefs.Save();
    }
}

[Serializable]
public class PlayerProgress
{
    public int highestLevelUnlocked = 1;
    public int score;
}
