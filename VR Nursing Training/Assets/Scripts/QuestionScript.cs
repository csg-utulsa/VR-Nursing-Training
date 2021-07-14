using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class QuestionScript : MonoBehaviour
{
    public GameObject[] Answers;

    public GameObject correctAnswer;

    public UnityEvent onCorrect;
    public UnityEvent onIncorrect;

    public void answerSelected(GameObject selected)
    {
        if (selected == correctAnswer)
        {
            Debug.Log("Correct Answer!");
            onCorrect.Invoke();
        }
        else
        {
            Debug.Log("Incorrect Answer!");
             onIncorrect.Invoke();
        }
        gameObject.SetActive(false);
    }


}
