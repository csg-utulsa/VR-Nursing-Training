using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class MovePlayer : InteractableBase
{
    public GameObject player;

    public UnityEvent whenPressed;

    public void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        Debug.Log("test");
        player.transform.position = new Vector3(21.1f, 5, 19f);
        whenPressed.Invoke(); // invoke actions like transfer of medicine
    }

}

// TODO: Clean this script up to be more modular