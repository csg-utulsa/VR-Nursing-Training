using MyBox;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Used to select one path from multiple possible paths in the flowchart
/// </summary>
public class DecisionNode : Node
{
    [Header("Decision Variable")]
    public bool UseOTSVariable;
    [ConditionalField(nameof(UseOTSVariable), false)]
    public string OTSVariableKey;
    [ConditionalField(nameof(UseOTSVariable), true)]
    public int NextNodeIndex;

    private int nextNodeIndex;

    public override void NodeActivated()
    {
        base.NodeActivated();

        nextNodeIndex = UseOTSVariable ? OTSVariableManager.GetInstance().GetIntVariable(OTSVariableKey) : NextNodeIndex;

        SetCurrentState(NodeStates.Successful);
    }

    public override void NodeCompleted()
    {
        if (nextNodeIndex < 0 || nextNodeIndex >= NextNodes.Count)
        {
            Debug.LogError($"Conditional Switch: Next Node Index invalid ({nextNodeIndex}). Activating all next nodes");
            ActivateNextNodes();
        }
        else
        {
            for(int i = 0; i < NextNodes.Count; i++)
            {
                if(i == nextNodeIndex)
                {
                    NextNodes[i].SetCurrentState(NodeStates.Active);
                }
                else
                {
                    NextNodes[i].SetCurrentState(NodeStates.Skipped);
                }
            }
        }
    }
}
