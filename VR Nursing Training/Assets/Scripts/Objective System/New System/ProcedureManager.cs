using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ProcedureManager : MonoBehaviour
{
    [Header("Events")]
    public UnityEvent OnProcedureBegins;
    public UnityEvent OnProcedureEnds;
    public UnityEvent<Node.NodeStates> OnProcedureStateChange;
    [Header("Procedure Sequence")]
    public Sequence ProcedureSequence;

    // Start is called before the first frame update
    void Start()
    {
        ProcedureSequence.StateChanged += ProcedureStateChanged;

        ProcedureSequence.SetCurrentState(Node.NodeStates.Active);
        OnProcedureBegins?.Invoke();
    }

    private void ProcedureStateChanged(Node Procedure, Node.NodeStates newState)
    {
        if(Procedure.Completed)
        {
            OnProcedureEnds?.Invoke();
        }

        OnProcedureStateChange?.Invoke(newState);
    }
}
