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
/// Centralized script to access and adjust variables used in a procedure
/// </summary>
public class OTSVariableManager : Singleton<OTSVariableManager>
{
    /// <summary>
    /// Centralized location for accessing variables related to the OTS
    ///
    [CreateAssetMenu(menuName = "Scriptable Objects/Objective Tree")]
    public class OTSVariableSet : ScriptableObject
    {
        public Dictionary<string, int> IntegerVariables;
        public Dictionary<string, string> StringVariables;
        public Dictionary<string, float> FloatVariables;
        public Dictionary<string, bool> BoolVariables;
        public Dictionary<string, GameObject> GameObjectVariables;
    }

    public OTSVariableSet CurrentVariableSet;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void UpdateVariablesFromJSON()
    {

    }

    public int GetIntVariable(string key)
    {
        return CurrentVariableSet.IntegerVariables[key];
    }

    public string GetStringVariable(string key)
    {
        return CurrentVariableSet.StringVariables[key];
    }

    public float GetFloatVariable(string key)
    {
        return CurrentVariableSet.FloatVariables[key];
    }

    public bool GetBoolVariable(string key)
    {
        return CurrentVariableSet.BoolVariables[key];
    }

    public GameObject GetGameObjectVariable(string key)
    {
        return CurrentVariableSet.GameObjectVariables[key];
    }
}
