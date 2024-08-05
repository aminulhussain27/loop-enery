using UnityEngine;
using System.Collections;

public class CameraShake : MonoBehaviour
{
    // Duration of the shake effect
    public float shakeDuration = 0.5f;
    // Magnitude of the shake effect
    public float shakeMagnitude = 0.2f;
    // Smoothing factor
    public float dampingSpeed = 1.0f;

    // Original position of the camera
    private Vector3 initialPosition;

    private void Start()
    {
        GameManager.Instance.levelCompleteEvent += TriggerShake;
    }
    void OnEnable()
    {
        initialPosition = transform.localPosition;
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
            TriggerShake(0);
    }
    public void TriggerShake(int level)
    {
        StartCoroutine(Shake());
    }

    private IEnumerator Shake()
    {
        float elapsed = 0f;

        while (elapsed < shakeDuration)
        {
            // Calculate a random offset for the shake effect
            float x = Random.Range(-1f, 1f) * shakeMagnitude;
            float y = Random.Range(-1f, 1f) * shakeMagnitude;

            // Apply the offset to the camera's position
            transform.localPosition = new Vector3(x, y, initialPosition.z);

            // Increase the elapsed time
            elapsed += Time.deltaTime;

            // Wait for the next frame
            yield return null;
        }

        // Reset the camera's position to the initial position
        transform.localPosition = initialPosition;
    }

    private void OnDestroy()
    {
        GameManager.Instance.levelCompleteEvent -= TriggerShake;
    }
}