using UnityEngine;

public class PopUpSound : MonoBehaviour
{
    [SerializeField] private SoundType soundType;

    private void OnEnable()
    {
        SoundManager.Instance.PlaySound(soundType);
    }

    private void OnDisable()
    {
        SoundManager.Instance.PlaySound(SoundType.RotateWhoosh);
    }
}