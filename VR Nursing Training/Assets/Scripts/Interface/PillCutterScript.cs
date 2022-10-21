using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class PillCutterScript : Interactable
{
    //public GameObject topHalfPill;
    //public GameObject bottomHalfPill;
    public GameObject spawnLocation;
    //private GameObject OrigPill;
    //private GameObject tophalf;
    //private GameObject bottomhalf;
    public UnityEvent onCut;
    //public string type;

    public override void Interact(GameObject other)
    {
        //Debug.Log("Attempting Cut");
        //OrigPill = other.gameObject;

        //if (other.CompareTag("Pill"))
        //{
            //tophalf = Instantiate(topHalfPill, spawnLocation.transform.position, OrigPill.transform.rotation);
            //bottomhalf = Instantiate(bottomHalfPill, spawnLocation.transform.position, Quaternion.Inverse(OrigPill.transform.rotation));
            //tophalf.GetComponent<InteractableScript>().setType(OrigPill.GetComponent<InteractableScript>().getType());
            //bottomhalf.GetComponent<InteractableScript>().setType(OrigPill.GetComponent<InteractableScript>().getType());
            //OrigPill.SetActive(false);
            
       // }

        if(other.TryGetComponent<MedicineData>(out MedicineData scrpt))
        {
            //Debug.Log("Found Meds");
            if (scrpt.getMedicineType() == MedicineTypes.FullPill)
            {
                //Debug.Log("Dispensing");
                scrpt.dispenseObject(spawnLocation.transform.position, spawnLocation.transform.rotation);
                scrpt.dispenseObject(spawnLocation.transform.position, spawnLocation.transform.rotation);
                onCut.Invoke();
            }
        }
    }

}
