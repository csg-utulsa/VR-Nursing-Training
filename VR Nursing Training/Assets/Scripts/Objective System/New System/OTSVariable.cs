using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

/// <summary>
/// Attempt at making a single variable class that could return different types as a value. Currently on backburner because of issues with type safety
/// </summary>
public class OTSVariable : MonoBehaviour
{
    public string key;

    private Type type;
    private object value;

    public OTSVariable(string initialKey, Type valueType, object initialValue)
    {
        key = initialKey;
        type = valueType;
        value = initialValue;
    }

    public object GetValue()
    {
        return value;
    }

    public void SetValue(object newValue, Type newType = null)
    {
        value = newValue;
        
        if(newType != null && newType != type)
        {
            type = newType;
        }
    }
}
