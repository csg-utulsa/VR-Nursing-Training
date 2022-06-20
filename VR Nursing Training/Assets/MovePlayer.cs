using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MovePlayer : InteractableBase
{
    public GameObject player;
    public GameObject moveLocation;
    public UnityEvent moveActions;

    public void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Hands")
        {
            Interact(other);
        }
    }

    public override void Interact(Collider other)
    {
        player.transform.position = moveLocation.transform.position;
        player.transform.rotation = moveLocation.transform.rotation;
        moveActions.Invoke(); // invoke actions like transfer of medicine
    }

}

// TODO: Should be moved onto a proper button instead of using InteractableBase