using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public Action<int> levelCompleteEvent;
    public Action<int> levelStartEvent;

    [SerializeField] private GameObject nodePrefab;
    [SerializeField] private Transform gridParent;
    [SerializeField] private Sprite[] allImages;

    private Node[,] grid;
    private List<Node> allNodes;
    private int currentLevel;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void InitializeGrid(LevelData levelData)
    {
        grid = new Node[Constants.GridWeidth, Constants.GridHeight];
        if (allNodes == null)
            allNodes = new List<Node>();
        else
        {
            foreach (Node node in allNodes)
                Destroy(node.gameObject);
            allNodes.Clear();
        }

        float nodeWidth = gridParent.GetComponent<RectTransform>().rect.width / Constants.GridWeidth;
        float nodeHeight = gridParent.GetComponent<RectTransform>().rect.height / Constants.GridHeight;

        foreach (NodeData nodeData in levelData.nodes)
        {
            GameObject newNode = Instantiate(nodePrefab, gridParent);
            Node nodeComponent = newNode.GetComponent<Node>();

            float posX = nodeData.x * nodeWidth - gridParent.GetComponent<RectTransform>().rect.width / 2 + nodeWidth / 2;
            float posY = nodeData.y * nodeHeight - gridParent.GetComponent<RectTransform>().rect.height / 2 + nodeHeight / 2;
            newNode.transform.localPosition = new Vector3(posX, posY, 0);
            nodeComponent.Initialize(nodeData, allImages[nodeData.itemIndex]);
            grid[nodeData.x, nodeData.y] = nodeComponent;
            allNodes.Add(nodeComponent);
        }
        StartCoroutine(ShowGridInitializeEffect());
    }

    public void StartLevel(int levelIndex)
    {
        levelStartEvent?.Invoke(levelIndex);
        currentLevel = levelIndex;
        LevelData levelData = LevelManager.Instance.levels.levels.Length > levelIndex ? LevelManager.Instance.levels.levels[levelIndex] :
        LevelManager.Instance.levels.levels[UnityEngine.Random.Range(0, LevelManager.Instance.levels.levels.Length-1)];
        InitializeGrid(levelData);
    }

    public void CheckForCompletion()
    {
        foreach (Node node in allNodes)
        {
            if (node.RotationState != node.CorrectRotationState)
                return;
        }
        PlayerProgressManager.Instance.SaveProgress(currentLevel);
        levelCompleteEvent?.Invoke(currentLevel);
    }

    private IEnumerator ShowGridInitializeEffect()
    {
        yield return new WaitForSeconds(Constants.GridAppearDelay);

        foreach (Node node in allNodes)
        {
            node.gameObject.SetActive(true);
            yield return new WaitForSeconds(Constants.GridAppearDelay);
        }
    }
}
