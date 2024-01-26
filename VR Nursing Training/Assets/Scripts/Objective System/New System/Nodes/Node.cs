using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Node : MonoBehaviour
{
    public enum NodeStates
    {
        Inactive,
        Active,
        Successful,
        Skipped,
        Failed
    }

    public NodeStates test;
    protected NodeStates currentState;

    public UnityAction<Node, NodeStates> StateChanged;

    public List<Node> NextNodes;

    public bool Active
    {
        get { return currentState == NodeStates.Active; }
    }

    public bool Completed
    {
        get
        {
            return !(currentState == NodeStates.Inactive || currentState == NodeStates.Active);
        }
    }

    protected virtual void Start()
    {
        currentState = NodeStates.Inactive;

        foreach(Node node in NextNodes)
        {
            node.StateChanged += NextNodeUpdated;
        }
    }

    private void Update()
    {
        if(currentState != test)
        {
            SetCurrentState(test);
        }
    }

    public NodeStates GetCurrentState()
    {
        return currentState;
    }

    public void SetCurrentState(NodeStates newState)
    {
        //Dont do anything if the new state is the same as the current state
        if (currentState == newState) return;

        test = newState;
        currentState = newState;

        if(StateChanged != null)
        {
            StateChanged(this, currentState);
        }
        
        OnStateChange();
    }

    public void OnStateChange()
    {
        switch (currentState)
        {
            case NodeStates.Inactive:
                NodeDeactivated();
                break;
            case NodeStates.Active:
                NodeActivated();
                break;
            case NodeStates.Successful:
                NodeCompleted();
                break;
            case NodeStates.Skipped:
                NodeSkipped();
                break;
            case NodeStates.Failed:
                NodeFailed();
                break;
        }
    }

    public virtual void NodeDeactivated() {}
    public virtual void NodeActivated() {}
    public virtual void NodeCompleted()
    {
        ActivateNextNodes();
    }
    public virtual void NodeSkipped() {}
    public virtual void NodeFailed() {}

    protected void ActivateNextNodes()
    {
        if(NextNodes != null)
        {
            foreach(Node node in NextNodes)
            {
                node.SetCurrentState(NodeStates.Active);
            }
        }
    }

    protected void NextNodeUpdated(Node nextNode, NodeStates newState)
    {
        if (!Completed && newState == NodeStates.Active)
        {
            SetCurrentState(NodeStates.Skipped);
        }
    }
}
