using UnityEngine;
using System.Collections.Generic;

public class AudioSourcePool : MonoBehaviour
{
    public static AudioSourcePool instance;

    [SerializeField]
    private int poolSize = 10;
    private Queue<AudioSource> audioSources;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
            InitializePool();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void InitializePool()
    {
        audioSources = new Queue<AudioSource>();
        for (int i = 0; i < poolSize; i++)
        {
            AudioSource audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.playOnAwake = false;
            audioSources.Enqueue(audioSource);
        }
    }

    public AudioSource GetAudioSource()
    {
        if (audioSources.Count > 0)
        {
            return audioSources.Dequeue();
        }
        else
        {
            AudioSource audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.playOnAwake = false;
            return audioSource;
        }
    }

    public void ReturnAudioSource(AudioSource audioSource)
    {
        audioSource.Stop();
        audioSource.clip = null;
        audioSources.Enqueue(audioSource);
    }
}