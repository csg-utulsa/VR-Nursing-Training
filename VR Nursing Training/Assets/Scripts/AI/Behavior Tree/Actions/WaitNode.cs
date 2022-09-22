using UnityEngine;

/// <summary>This node waits for "waitTime" seconds and then returns Success.</summary>
public class WaitNode : ActionNode
{
    public float waitTime = 1f;
    public bool useParameter;
    public string parameterName = "";
    public string overrideName = "";
    float startTime;

    private void Awake()
    {
        SetNodeName();
    }

    protected override void SetNodeName(string _name = "Wait Node")
    {
        if (overrideName != "")
        {
            nodeName = overrideName;
        }
        else if (parameterName != "")
        {
            nodeName = $"Wait for {parameterName}";
        }
        else
        {
            nodeName = $"Wait for {waitTime}s";
        }
       
    }

    public override void UpdateNodeObjectName()
    {
        SetNodeName();
        name = nodeName;
    }

    protected override void OnStart() 
    { 
        
        startTime = Time.time; 
    }

    protected override void OnStop() { }

    protected override NodeState OnUpdate()
    {
        if (Time.time - startTime > waitTime)
            return NodeState.Success;
        else
            return NodeState.Running;
    }
}
