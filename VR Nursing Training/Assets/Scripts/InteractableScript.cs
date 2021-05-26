using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableScript : MonoBehaviour
{
    public bool isInteractable;
    public Vector3 initialPosition;

    private void Start()
    {
        initialPosition = gameObject.transform.position;
        isInteractable = true;
    }

    public void setInteractable(bool input)
    {
        isInteractable = input;
    }

    public bool getisInteractable()
    {
        return isInteractable;
    }

    public void Reset()
    {
        gameObject.transform.position = initialPosition;
    }

}
