using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider))]

public abstract class Interactable : MonoBehaviour
{
    
    public bool disableTriggerFunctionality;
    public bool debugging = false;

    /*private void Start()
    {
        *//*if (!XRRigSingleton.xrs.getVRActive())
        {
            disableTriggerFunctionality = true;
        }    *//*
    }*/

    private void OnTriggerEnter(Collider other)
    {
        if (!XRRigSingleton.xrs.getVRActive()) Interact(other.gameObject);
    }

    public abstract void Interact(GameObject other);
}
