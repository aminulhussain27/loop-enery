using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SpriteAnimator : MonoBehaviour
{
    private Color startColor = Color.grey;
    private Color endColor = Color.green;
    private Vector3 startSize = new Vector3(1, 1, 1);
    private Vector3 endSize = new Vector3(1.2f, 1.2f, 1.2f);
    private readonly float blinkDuration = 0.2f;
    private readonly float sizeChangeDuration = 0.5f;
    private readonly float colorChangeDuration = 0.5f;
    private Coroutine blinkCoroutine;
    private Image image;

    private void Awake()
    {
        image = GetComponent<Image>();
        GameManager.Instance.levelCompleteEvent += ShowAnimation;
    }

    private void ShowAnimation(int obj)
    {
        Debug.Log("Start");
        if (blinkCoroutine != null)
            StopCoroutine(blinkCoroutine);
        blinkCoroutine = StartCoroutine(BlinkAndChange());
    }

    private IEnumerator BlinkAndChange()
    {
        // Blink
        image.enabled = false;
        yield return new WaitForSeconds(blinkDuration);
        image.enabled = true;
        yield return new WaitForSeconds(blinkDuration);

        // Change Color
        yield return StartCoroutine(ChangeColor(startColor, endColor, colorChangeDuration));

        // Change back Color
        yield return StartCoroutine(ChangeColor(endColor, startColor, colorChangeDuration));

        // Change back Size
        yield return StartCoroutine(ChangeSize(startSize, endSize, sizeChangeDuration));
    }

    private IEnumerator ChangeColor(Color fromColor, Color toColor, float duration)
    {
        float elapsed = 0f;
        while (elapsed < duration)
        {
            image.color = Color.Lerp(fromColor, toColor, elapsed / duration);
            elapsed += Time.deltaTime;
            yield return null;
        }
        //image.color = toColor;
    }

    private IEnumerator ChangeSize(Vector3 fromSize, Vector3 toSize, float duration)
    {
        float elapsed = 0f;
        while (elapsed < duration)
        {
            transform.localScale = Vector3.Lerp(fromSize, toSize, elapsed / duration);
            elapsed += Time.deltaTime;
            yield return null;
        }
        transform.localScale = fromSize;
        image.color = Color.green;
    }

    private void OnDestroy()
    {
        GameManager.Instance.levelCompleteEvent -= ShowAnimation;
    }
}
