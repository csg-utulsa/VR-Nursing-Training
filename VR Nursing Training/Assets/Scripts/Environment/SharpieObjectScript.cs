using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SharpieObjectScript : Interactable
{
    public UnityEvent<string> onMark;

    /*public override bool canInteractWithHand()
    {
        return false;
    }*/

    // Mark Patches
    private void OnTriggerEnter(Collider other)
    {
        Interact(other.gameObject);
    }
    public override void Interact(GameObject other)
    {
        if (other.CompareTag("Sharpie"))
        {
            gameObject.transform.parent.GetComponent<PatchObjectScript>().markPatch();
            other.GetComponentInChildren<SharpieObjectScript>().onMark.Invoke(gameObject.transform.parent.GetComponent<InteractableScript>().getType());
        }
    }
}
