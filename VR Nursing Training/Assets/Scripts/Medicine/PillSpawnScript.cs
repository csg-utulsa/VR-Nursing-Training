using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PillSpawnScript : Interactable
{
    public UnityEvent<string> onSpawn;
    private Vector3 spawnLoc;

    private void Awake()
    {
        spawnLoc = transform.position + new Vector3(0, 1, 0);
    }

    public override void Interact(GameObject other)
    {
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            if (scrpt.getMedicineType() == MedicineTypes.PillContainer)
            {
                scrpt.dispenseObject(spawnLoc, transform.rotation);
                scrpt.dispenseObject(spawnLoc, transform.rotation);
                scrpt.dispenseObject(spawnLoc, transform.rotation);
                onSpawn.Invoke(scrpt.getMedicineName());
            }
            else if (scrpt.getMedicineType() == MedicineTypes.PatchContainer)
            {
                scrpt.dispenseObject(spawnLoc, transform.rotation);
                onSpawn.Invoke(scrpt.getMedicineName());
            }
        }
    }
}
