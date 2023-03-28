using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MenuButtonScript : Interactable
{
    public UnityEvent onInteract;
 
    public void callInteract(Collider other)
    {
        Interact(other.gameObject);
    }


    public override void Interact(GameObject other = null)
    {
        onInteract.Invoke();
    }
}
