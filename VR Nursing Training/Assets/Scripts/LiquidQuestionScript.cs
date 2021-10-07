using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class LiquidQuestionScript : MonoBehaviour
{
    [SerializeField] private GameObject[] Answers;
    [SerializeField] private int[] dosageOptions;

    [SerializeField] private GameObject correctAnswer;

    [SerializeField] private LiquidObjectScript liquidObject;

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
        
        for (int i = 0; i < Answers.Length; i++)
        {
            if (selected == Answers[i])
            {
                liquidObject.setDosage(dosageOptions[i]);
            }
        }

        gameObject.SetActive(false);
    }


}
