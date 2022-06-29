using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider))]

public class Interactable : MonoBehaviour
{
    public bool disableTriggerFunctionality;

    private void OnTriggerEnter(Collider other)
    {
        if (!disableTriggerFunctionality) Interact(other.gameObject);
    }

    public virtual void Interact(GameObject other) { }
}
