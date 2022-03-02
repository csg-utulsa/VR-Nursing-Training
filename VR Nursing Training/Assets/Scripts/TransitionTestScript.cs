using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransitionTestScript : InteractableBase
{
    public MedCartTransition move;
    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            move.moveObjects();
        }
    }

}