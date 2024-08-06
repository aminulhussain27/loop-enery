using System;
using UnityEngine;

[Serializable]
public class SoundData
{
    public SoundType soundType;
    public AudioClip audioClip;
    public float volume = 1f;
    public bool loop = false;
}