using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider))]
public class MedicineSpawnScript : Interactable
{
    [Tooltip("Dispensers allowed to dispense when interacting with this object")]
    public MedicineTypes[] allowedDispensers;

    [Tooltip("Position to spawn new objects; Set to a default value if none given")]
    public Transform SpawnLoc;

    /// <summary>
    /// Set to SpawnLoc if not null otherwise set to a default position
    /// </summary>
    private Vector3 spawnLoc;

    /// <summary>
    /// Event invoked after spawning objects
    /// </summary>
    public UnityEvent<string> onSpawn;

    /// <summary>
    /// Set based on provided allowedDispensers
    /// </summary>
    private MedicineTypes dispenserCheck;

    private void Awake()
    {
        // Set value for spawnLoc
        if (SpawnLoc == null)
        {
            spawnLoc = transform.position + new Vector3(0, 1, 0);
        } else
        {
            spawnLoc = SpawnLoc.position;
        }
        
        // Set value for dispenserCheck
        foreach (MedicineTypes dispensableMedType in allowedDispensers)
        {
            dispenserCheck |= dispensableMedType;
        }
        allowedDispensers = null; // for GC
    }

    public override void Interact(GameObject other)
    {
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            if ((scrpt.getMedicineType() & dispenserCheck) != 0)
            {
                scrpt.dispenseObjects(spawnLoc, transform.rotation);
                onSpawn.Invoke(scrpt.getMedicineName());
            }
        }
    }
}
