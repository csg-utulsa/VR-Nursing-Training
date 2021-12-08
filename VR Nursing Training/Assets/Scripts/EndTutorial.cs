using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndTutorial : InteractableBase
{

    public GameObject playerObject = null;

    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            Vector3 room1Pos = new Vector3(0.2f, 5f, -1.3f);
            
            if (playerObject != null)
            {
                playerObject.transform.position = room1Pos;
            }
        }
    }

}
