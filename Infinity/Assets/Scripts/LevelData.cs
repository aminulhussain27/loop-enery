using System;

[Serializable]
public class NodeData
{
    public int defaultRotationState;
    public int correctRotationState;
    public int x;
    public int y;
    public int imageIndex;//0:Source, 1: Light 2: curve, 3: Line
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