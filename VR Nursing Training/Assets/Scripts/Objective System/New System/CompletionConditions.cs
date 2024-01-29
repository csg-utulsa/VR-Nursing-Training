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

    [Header("Base Settings")]
    public OTSVariableTypes CompletionVariableType;
    public string VariableKey;
    [Header("Comparison Types")]
    public NumericComparators NumericComparator;
    public StringComparators StringComparator;
    public GameObjectComparators GameObjectComparator;
    public BoolComparators BoolComparator;
    [Header("Comparison Values")]
    //Things too compare to
    public int IntToCompare = -1;
    public float FloatToCompare = -1;
    public string StringToCompare;
    public bool BoolToCompare;
    public GameObject GoToCompare;
    [Header("Compare to Variable Settings")]
    public bool CompareToOTSVariable;
    public string VariableKeyToCompare;

    private bool _completed = false;

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

        float valueToCheck = isInt ? OTSVariableManager.GetInstance().GetIntVariable(VariableKey) : OTSVariableManager.GetInstance().GetFloatVariable(VariableKey);
        float valueToCompare;

        if (CompareToOTSVariable)
        {
            valueToCompare = isInt ? OTSVariableManager.GetInstance().GetIntVariable(VariableKeyToCompare) : OTSVariableManager.GetInstance().GetFloatVariable(VariableKeyToCompare);
        }
        else
        {
            valueToCompare = isInt ? IntToCompare : FloatToCompare;
        }


            switch (NumericComparator)
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

        string valueToCheck = OTSVariableManager.GetInstance().GetStringVariable(VariableKey);
        string valueToCompare = CompareToOTSVariable ? OTSVariableManager.GetInstance().GetStringVariable(VariableKeyToCompare) : StringToCompare;

        switch (StringComparator)
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

        bool valueToCheck = OTSVariableManager.GetInstance().GetBoolVariable(VariableKey);
        bool valueToCompare = CompareToOTSVariable ? OTSVariableManager.GetInstance().GetBoolVariable(VariableKeyToCompare) : BoolToCompare;

        if(BoolComparator == BoolComparators.NotEqual)
        {
            valueToCheck = !valueToCheck;
        }

        result = valueToCheck == valueToCompare;

        return result;
    }

    private bool CheckGameObjCompletion()
    {
        bool result = false;

        switch (GameObjectComparator)
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
