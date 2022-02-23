using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePlayer : InteractableBase
{
    public GameObject player;

    public void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        Debug.Log("test");
        player.transform.position = new Vector3(21.099f, 5, 18.465f);
    }

}
