using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Centralized location for accessing variables related to the OTS
///
[CreateAssetMenu(menuName = "Scriptable Objects/Objective Tree")]
public class OTSVariables : ScriptableObject
{
    public Dictionary<string, int> IntegerVariables;
    public Dictionary<string, string> StringVariables;
    public Dictionary<string, float> FloatVariables;
    public Dictionary<string, bool> BoolVariables;
    public Dictionary<string, object> ObjectVariables;
}
