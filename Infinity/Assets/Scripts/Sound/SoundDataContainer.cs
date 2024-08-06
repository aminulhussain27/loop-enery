using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "SoundData", menuName = "ScriptableObjects/SoundData", order = 1)]


public class SoundDataContainer : ScriptableObject
{
    public List<SoundData> soundDataList;
}


public enum SoundType
{
    BackgroundMusic,
    ButtonClick,
    LevelComplete,
    PopUp,
    RotateWhoosh,
    ScoreIncreasing,
    NodeAppearing
}
