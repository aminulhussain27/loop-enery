using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System;

public class SoundManager : MonoBehaviour
{
    public static SoundManager Instance;

    [SerializeField]
    private SoundDataContainer soundDataContainer;

    private Dictionary<SoundType, SoundData> soundDataDictionary;


    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            InitializeSoundDataDictionary();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        InitializeBackgroundMusic();
    }

    private void InitializeSoundDataDictionary()
    {
        soundDataDictionary = new Dictionary<SoundType, SoundData>();

        foreach (SoundData soundData in soundDataContainer.soundDataList)
        {
            soundDataDictionary[soundData.soundType] = soundData;
        }
    }

    private void InitializeBackgroundMusic()
    {
        if (soundDataDictionary.TryGetValue(SoundType.BackgroundMusic, out SoundData backgroundMusicData))
        {
            AudioSource backgroundMusicSource = AudioSourcePool.instance.GetAudioSource();
            backgroundMusicSource.clip = backgroundMusicData.audioClip;
            backgroundMusicSource.volume = backgroundMusicData.volume;
            backgroundMusicSource.loop = backgroundMusicData.loop;
            backgroundMusicSource.Play();
        }
    }

    public void PlaySound(SoundType soundType)
    {
        if (soundDataDictionary.TryGetValue(soundType, out SoundData soundData))
        {
            AudioSource audioSource = AudioSourcePool.instance.GetAudioSource();
            audioSource.clip = soundData.audioClip;
            audioSource.volume = soundData.volume;
            audioSource.loop = soundData.loop;
            audioSource.Play();
            StartCoroutine(ReturnAudioSourceToPool(audioSource, soundData.audioClip.length));
        }
        else
        {
            Debug.LogWarning("SoundManager: SoundType " + soundType + " not found!");
        }
    }

    private IEnumerator ReturnAudioSourceToPool(AudioSource audioSource, float delay)
    {
        yield return new WaitForSeconds(delay);
        if (!audioSource.loop)
        {
            AudioSourcePool.instance.ReturnAudioSource(audioSource);
        }
    }
}
