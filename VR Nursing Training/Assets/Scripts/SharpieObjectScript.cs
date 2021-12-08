using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SharpieObjectScript : InteractableBase
{
    public UnityEvent<string> onMark;

    public override bool canInteractWithHand()
    {
        return false;
    }

    // Mark Patches
    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }
    public override void Interact(Collider other)
    {
        if (other.CompareTag("Patch"))
        {
            other.GetComponent<PatchObjectScript>().markPatch();
            onMark.Invoke(other.gameObject.GetComponent<InteractableScript>().getType());
        }
    }
}
