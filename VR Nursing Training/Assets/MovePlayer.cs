using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MovePlayer : Interactable 
{ 
    public GameObject player;
    public GameObject moveLocation;
    public UnityEvent moveActions;

    public void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Hands")
        {
            Interact(other.gameObject);
        }
    }

    public override void Interact(GameObject other)
    {
        player.transform.position = moveLocation.transform.position;
        player.transform.rotation = moveLocation.transform.rotation;
        moveActions.Invoke(); // invoke actions like transfer of medicine
    }

}

// TODO: Should be moved onto a proper button instead of using InteractableBase