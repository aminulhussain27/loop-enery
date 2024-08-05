using System;

[Serializable]
public class NodeData
{
    public int startState;
    public int correctState;
    public int x;
    public int y;
    public int itemIndex;//0:Source, 1: Light 2: curve, 3: Line
}

[Serializable]
public class LevelData
{
    public NodeData[] nodes;
}

[Serializable]
public class Levels
{
    public LevelData[] levels;
}