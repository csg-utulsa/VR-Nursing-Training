using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PillSpawnScript : Interactable
{
    //public GameObject pill;
   // private GameObject pill1;
    //private GameObject pill2;
   // private GameObject pill3;
    public UnityEvent<string> onSpawn;

    public GameObject patchNitro;
    //private GameObject patch;
    //private string patchType;

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
            //pill1 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
            //pill2 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
            //pill3 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);

            

            //pill1.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
            //pill2.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
            //pill3.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
            
        }
        /*if (other.CompareTag("PatchContainer"))
        {
            patchType = other.gameObject.GetComponent<InteractableScript>().getType();
            if (patchType == "NITROGLYCERIN")
            {
                patch = Instantiate(patchNitro, transform.position + new Vector3(0, 1, 0), transform.rotation);
                //onSpawn.Invoke(patchType);
            }
        }*/
    }
}
