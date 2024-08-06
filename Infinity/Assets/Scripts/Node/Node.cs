using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class Node : MonoBehaviour
{
    [SerializeField]private int rotationState;
    [SerializeField] private Button nodeButton;
    [SerializeField] private Text label;
    [SerializeField] private Image nodeImage;

    private NodeData nodeData;

    public int RotationState { get { return rotationState; } private set { } }
    public int DefaultRotationState { get; private set; }
    public int CorrectRotationState { get; private set; }

    private Coroutine rotateCoroutine;

    private void Start()
    {
        nodeButton.onClick.RemoveListener(OnButtonClick);
        nodeButton.onClick.AddListener(OnButtonClick);
    }

    public void Initialize(NodeData data, Sprite nodeSprite)
    {
        nodeData = data;
        if (nodeData.itemIndex == 3)//If index==3 put only 0,1
        {
            SimplifyRotationDataForLine();
        }
        DefaultRotationState = nodeData.startState;
        CorrectRotationState = nodeData.correctState;
        nodeImage.transform.rotation = Quaternion.Euler(0, 0, -DefaultRotationState * 90);
        rotationState = DefaultRotationState;
        //label.text = rotationState + "/" + nodeData.correctState +" "+nodeData.x.ToString() + "," + nodeData.y.ToString();
        nodeImage.sprite = nodeSprite;
    }

    private void OnButtonClick()
    {
        RotateNode();
        GameManager.Instance.CheckForCompletion();
    }

    private void RotateNode()
    {
        if (rotateCoroutine == null)
        {
            rotationState = (rotationState + 1) % 4;
            if (nodeData.itemIndex == 3)
                rotationState = rotationState % 2 == 0 ? rotationState % 2 : rotationState % 3;
           // label.text = rotationState + "/" + nodeData.correctState + "  (" + nodeData.x.ToString() + "," + nodeData.y.ToString() + ")";
            rotateCoroutine = StartCoroutine(RotateWithDelay());
        }
    }

    private IEnumerator RotateWithDelay()
    {
        Quaternion initialRotation = nodeImage.transform.rotation;
        Quaternion targetRotation = initialRotation * Quaternion.Euler(0, 0, -90);
        float elapsed = 0f;

        while (elapsed < Constants.GridAppearDelay)
        {
            nodeImage.transform.rotation = Quaternion.Slerp(initialRotation, targetRotation, elapsed / Constants.GridAppearDelay);
            yield return null;
            elapsed += Time.deltaTime;
        }

        nodeImage.transform.rotation = targetRotation;
        rotateCoroutine = null;
    }

    private void SimplifyRotationDataForLine()
    {
        nodeData.startState = nodeData.startState % 2 == 0 ? nodeData.startState % 2 :
    nodeData.startState % 3;

        nodeData.correctState = nodeData.correctState % 2 == 0 ? nodeData.correctState % 2 :
            nodeData.correctState % 3;
    }
}

