using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum OTSVariableTypes
{
    Int,
    String,
    Float,
    Bool,
    GameObj
}

/// <summary>
/// Centralized script to hold variables used to check for completion of nodes
/// </summary>
public class OTSVariableManager : Singleton<OTSVariableManager>
{
    public List<int> ints = new List<int>();
    public List<string> strings = new List<string>();
    public List<float> floats = new List<float>();
    public List<bool> bools = new List<bool>();
    public List<GameObject> gameObjects = new List<GameObject>();

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void UpdateVariablesFromJSON()
    {

    }
}
