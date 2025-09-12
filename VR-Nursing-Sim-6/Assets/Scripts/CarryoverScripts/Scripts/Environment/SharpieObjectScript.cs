using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SharpieObjectScript : Interactable
{
    public UnityEvent<string> onMark;

    public override void Interact(GameObject other)
    {
        if (other.CompareTag("Sharpie"))
        {
            if (debugging) Debug.Log("Marking Patch");
            gameObject.transform.parent.GetComponent<PatchObjectScript>().markPatch();
            other.GetComponentInChildren<SharpieObjectScript>().onMark.Invoke(gameObject.transform.parent.GetComponent<MedicineData>().getMedicineName());
        }
    }
}
