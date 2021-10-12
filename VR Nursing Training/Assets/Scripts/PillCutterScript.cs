using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class PillCutterScript : InteractableBase
{
    public GameObject topHalfPill;
    public GameObject bottomHalfPill;
    public GameObject spawnLocation;
    private GameObject OrigPill;
    private GameObject tophalf;
    private GameObject bottomhalf;
    public UnityEvent onCut;
    public string type;

    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
        
    }

    public override void Interact(Collider other)
    {
        OrigPill = other.gameObject;

        if (other.CompareTag("Pill"))
        {
            tophalf = Instantiate(topHalfPill, spawnLocation.transform.position, OrigPill.transform.rotation);
            bottomhalf = Instantiate(bottomHalfPill, spawnLocation.transform.position, Quaternion.Inverse(OrigPill.transform.rotation));
            tophalf.GetComponent<InteractableScript>().setType(OrigPill.GetComponent<InteractableScript>().getType());
            bottomhalf.GetComponent<InteractableScript>().setType(OrigPill.GetComponent<InteractableScript>().getType());
            OrigPill.SetActive(false);
            onCut.Invoke();
        }
    }


}
