using UnityEngine;

public abstract class NodeBase : ScriptableObject
{
    public bool _debugging;
    public enum NodeState
    {
        Failure,
        Running,
        Success
    }

    [HideInInspector] public NodeState nodeState = NodeState.Running;
    [HideInInspector] public bool started = false;
    [HideInInspector] public string guid;
    [HideInInspector] public Vector2 position = Vector2.zero;
    [HideInInspector] public Blackboard blackboard;
    [HideInInspector] public string nodeName = "Node";
    [TextArea] public string description;

    private void Awake()
    {
        nodeState = NodeState.Running;
        started = false;
    }

    public NodeState Update()
    {
        if(!started)
        {

            OnStart();
            started = true;
        }

        nodeState = OnUpdateInit();

        if(nodeState == NodeState.Failure || nodeState == NodeState.Success)
        {
            OnStop();
            started = false;
        }

        return nodeState;
    }

    public virtual NodeBase Clone()
    {
        return Instantiate(this);
    }

    protected virtual void SetNodeName(string _name = "Node") { nodeName = _name; }
    protected abstract void OnStart();
    protected abstract void OnStop();
    protected abstract NodeState OnUpdate();
    protected virtual NodeState OnUpdateInit() { return OnUpdate(); }
    public abstract void UpdateNodeObjectName();
}
