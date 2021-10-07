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
    private string liquidType;

    private void OnTriggerEnter(Collider other)
    {
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
                onPour.Invoke(liquidType);
                measureCanvas.SetActive(true);
                parentLiquid.gameObject.GetComponent<InteractableScript>().setType(liquidType);
            }
        }
    }
}
