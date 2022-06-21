using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider))]

public class Interactable : MonoBehaviour
{
    //public UnityEvent interact;

    private void OnTriggerEnter(Collider other)
    {
        Interact(other.gameObject);
    }

    public virtual void Interact(GameObject other) { }
}
