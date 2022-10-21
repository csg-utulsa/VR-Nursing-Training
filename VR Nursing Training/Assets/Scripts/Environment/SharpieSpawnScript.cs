using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SharpieSpawnScript : MonoBehaviour
{
    [SerializeField] private GameObject sharpie;

    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            if (scrpt.getMedicineType() == MedicineTypes.Patch)
            {
                sharpie.SetActive(true);
            }
        }
    }
}
