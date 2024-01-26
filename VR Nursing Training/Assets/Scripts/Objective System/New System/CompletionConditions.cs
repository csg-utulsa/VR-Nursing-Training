using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CompletionConditions : MonoBehaviour
{
    #region Comparator Enums
    public enum NumericComparators
    {
        LessThan,
        LessThanOrEqual,
        GreaterThan,
        GreaterThanOrEqual,
        Equal,
        NotEqual
    }

    public enum GameObjectComparators
    {
        Equal,
        NotEqual,
        Active,
        Inactive,
        SameTag
    }

    public enum StringComparators
    {
        BeforeAlphabetically,
        AfterAlphabetically,
        Equal,
        NotEqual
    }

    public enum BoolComparators
    {
        Equal,
        NotEqual
    }
    #endregion

    public OTSVariableTypes CompletionVariableType;
    public string VariableKey;

    private bool _completed = false;
    private OTSVariable _variableToCheck;

    //Comparison settings
    private NumericComparators _numericComparator;
    private StringComparators _stringComparator;
    private GameObjectComparators _gameObjectComparator;
    private BoolComparators _boolComparator;
    private bool _compareToOTSVariable;
    //Things too compare to
    private OTSVariable _variableToCompare;
    private int _intToCompare = -1;
    private float _floatToCompare = -1;
    private string _stringToCompare;
    private bool _boolToCompare;
    private GameObject _goToCompare;

    public void CheckForCompletion()
    {
        switch(CompletionVariableType) 
        {
            case OTSVariableTypes.Int:
                _completed = CheckNumericCompletion(true);
                break;
            case OTSVariableTypes.Float:
                _completed = CheckNumericCompletion(false);
                break;
            case OTSVariableTypes.String:
                _completed = CheckStringCompletion();
                break;
            case OTSVariableTypes.Bool:
                _completed = CheckBoolCompletion();
                break;
            case OTSVariableTypes.GameObj:
                _completed = CheckGameObjCompletion();
                break;
        }
    }

    private bool CheckNumericCompletion(bool isInt)
    {
        bool result = false;

        float valueToCheck = (float)_variableToCheck.GetValue();
        float valueToCompare = _compareToOTSVariable ? (float)_variableToCompare.GetValue() : isInt ? _intToCompare : _floatToCompare;

        switch(_numericComparator)
        {
            case NumericComparators.LessThan:
                result = valueToCheck < valueToCompare;
                break;
            case NumericComparators.LessThanOrEqual:
                result = valueToCheck <= valueToCompare;
                break;
            case NumericComparators.GreaterThan:
                result = valueToCheck > valueToCompare;
                break;
            case NumericComparators.GreaterThanOrEqual:
                result = valueToCheck >= valueToCompare;
                break;
            case NumericComparators.Equal:
                result = valueToCheck == valueToCompare;
                break;
            case NumericComparators.NotEqual:
                result = valueToCheck != valueToCompare;
                break;
        }

        return result;
    }

    private bool CheckStringCompletion()
    {
        bool result = false;

        string valueToCheck = (string)_variableToCheck.GetValue();
        string valueToCompare = _compareToOTSVariable ? (string)_variableToCompare.GetValue() : _stringToCompare;

        switch (_stringComparator)
        {
            case StringComparators.BeforeAlphabetically:
                result = string.Compare(valueToCheck, valueToCompare, true) < 0;
                break;
            case StringComparators.AfterAlphabetically:
                result = string.Compare(valueToCheck, valueToCompare, true) > 0;
                break;
            case StringComparators.Equal:
                result = valueToCheck.Equals(valueToCompare);
                break;
            case StringComparators.NotEqual:
                result = !valueToCheck.Equals(valueToCompare);
                break;
        }

        return result;
    }

    private bool CheckBoolCompletion()
    {
        bool result = false;

        bool valueToCheck = (bool)_variableToCheck.GetValue();
        bool valueToCompare = _compareToOTSVariable ? (bool)_variableToCompare.GetValue() : _boolToCompare;

        if(_boolComparator == BoolComparators.NotEqual)
        {
            valueToCheck = !valueToCheck;
        }

        result = valueToCheck == valueToCompare;

        return result;
    }

    private bool CheckGameObjCompletion()
    {
        bool result = false;

        switch (_gameObjectComparator)
        {
            case GameObjectComparators.SameTag:
                break;
            case GameObjectComparators.Active:
                break;
            case GameObjectComparators.Inactive:
                break;
            case GameObjectComparators.Equal:
                break;
            case GameObjectComparators.NotEqual:
                break;
        }

        return result;
    }

    public bool IsCompleted()
    {
        return _completed;
    }
}
