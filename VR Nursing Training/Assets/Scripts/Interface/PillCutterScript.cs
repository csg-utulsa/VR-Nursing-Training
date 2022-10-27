using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class PillCutterScript : Interactable
{
    public GameObject spawnLocation;
    public UnityEvent onCut;

    public override void Interact(GameObject other)
    {
        if(other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            if (debugging) Debug.Log("Found Meds");
            if (scrpt.getMedicineType() == MedicineTypes.FullPill)
            {
                if (debugging) Debug.Log("Dispensing from: " + other.name);
                scrpt.dispenseObject(spawnLocation.transform.position, spawnLocation.transform.rotation);
                scrpt.dispenseObject(spawnLocation.transform.position, spawnLocation.transform.rotation);
                //Destroy(other);
                onCut.Invoke();
            }
        }
    }

}
