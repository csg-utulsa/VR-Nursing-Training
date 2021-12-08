using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class LiquidTriggerScript : InteractableBase
{
    public string[] requiredType;
    public GameObject measureCanvas;
    public UnityEvent<string> onPour;
    public GameObject liquidFull;
    public GameObject liquidEmpty;
    public GameObject parentLiquid;

    private bool correctType;
    private string liquidType;

    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        Debug.Log("Interacting...");
        if (other.CompareTag("LiquidContainer"))
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
                
                Debug.Log("Liquid Doing Thing");
                liquidEmpty.SetActive(false);
                liquidFull.SetActive(true);
                onPour.Invoke(liquidType);
                measureCanvas.SetActive(true);
                parentLiquid.GetComponent<InteractableScript>().setType(liquidType);
            }
        }
    }
}
