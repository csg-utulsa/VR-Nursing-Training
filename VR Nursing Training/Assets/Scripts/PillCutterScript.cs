using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class PillCutterScript : MonoBehaviour
{
    public GameObject halfPill;
    private GameObject OrigPill;
    private GameObject tophalf;
    private GameObject bottomhalf;
    public UnityEvent onCut;


    private void OnTriggerEnter(Collider other)
    {
        OrigPill = other.gameObject;
        
        if (other.CompareTag("Pill"))
        {
            tophalf = Instantiate(halfPill, transform.position + new Vector3(0,1,0), OrigPill.transform.rotation);
            bottomhalf = Instantiate(halfPill, transform.position + new Vector3(0, 1, 0), Quaternion.Inverse(OrigPill.transform.rotation));
            tophalf.GetComponent<InteractableScript>().setMaterial(OrigPill.GetComponent<InteractableScript>().getMaterial());
            bottomhalf.GetComponent<InteractableScript>().setMaterial(OrigPill.GetComponent<InteractableScript>().getMaterial());
            OrigPill.SetActive(false);
            onCut.Invoke();
        }
        
    }

}
