using UnityEngine;
using UnityEngine.UI;

public class ButtonClickSound : MonoBehaviour
{
    [SerializeField] private SoundType soundType;

    private void Awake()
    {
        if (TryGetComponent<Button>(out var button))
        {
            button.onClick.AddListener(OnButtonClick);
        }
    }

    private void OnButtonClick()
    {
        SoundManager.Instance.PlaySound(soundType);
    }
}