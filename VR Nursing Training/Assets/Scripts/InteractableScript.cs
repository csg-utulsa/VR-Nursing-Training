using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableScript : MonoBehaviour
{
    public bool isInteractable;
    public Vector3 initialPosition;
    public GameObject target;

    private void Start()
    {
        initialPosition = gameObject.transform.position;
        isInteractable = true;
    }

    public void setTarget(GameObject inputTarget)
    {
        target = inputTarget;
    }

    public GameObject getTarget()
    {
        return target;
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
