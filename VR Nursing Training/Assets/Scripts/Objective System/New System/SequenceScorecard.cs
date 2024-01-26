using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SequenceScorecard : MonoBehaviour
{
    public Sequence sequenceToScore;

    public GameObject ScorecardObject;
    public Text ScorecardText;
    public GameObject SuccessMark;
    public GameObject FailureMark;

    // Start is called before the first frame update
    void Start()
    {
        sequenceToScore.StateChanged += SequenceStateChanged;
    }

    private void SequenceStateChanged(Node sequence, Node.NodeStates newState)
    {
        if (sequence.Completed)
        {
            GradeSequence();
        }
    }

    /// <summary>
    /// Activate the scorecard and grade the sequence
    /// </summary>
    private void GradeSequence()
    {
        ScorecardObject.SetActive(true);
        ScorecardText.text = GetSequenceReport();

        if(sequenceToScore.GetCurrentState() == Node.NodeStates.Successful)
        {
            SuccessMark.SetActive(true);
            FailureMark.SetActive(false);
        }
        else if(sequenceToScore.GetCurrentState() == Node.NodeStates.Failed)
        {
            FailureMark.SetActive(true);
            SuccessMark.SetActive(false);
        }
        else
        {
            if(!sequenceToScore.Completed)
            {
                Debug.LogError("Graded Sequence not Completed");
            }
            else
            {
                Debug.LogError("Graded Sequence Skipped");
            }
        }
    }

    private string GetSequenceReport()
    {
        return "TO DO: Complete report for sequence";
    }
}
