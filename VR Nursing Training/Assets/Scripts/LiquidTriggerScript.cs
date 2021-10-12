using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class LiquidTriggerScript : MonoBehaviour
{
    [SerializeField] private string[] requiredType;
    [SerializeField] private GameObject measureCanvas;
    public UnityEvent<string> onPour;

    [SerializeField] private GameObject parentLiquid;

    private bool correctType;
    private bool complete = false;
    private string liquidType;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("LiquidContainer") && !complete)
        {
            liquidType = other.gameObject.GetComponent<InteractableScript>().getType();
            correctType = false;
            for (int i = 0; i < requiredType.Length; i++)
            {
                if (requiredType[i] == liquidType)
                {
                    correctType = true;
                }
            }
            if (requiredType.Length == 0 || correctType)
            {
                onPour.Invoke(liquidType);
                measureCanvas.SetActive(true);
                measureCanvas.GetComponent<LiquidQuestionScript>().setCup(this);
                parentLiquid.gameObject.GetComponent<InteractableScript>().setType(liquidType);
            }
        }
    }

    public void setComplete(bool comp)
    {
        complete = comp;
    }
}
