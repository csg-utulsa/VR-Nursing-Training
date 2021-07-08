using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PillSpawnScript : MonoBehaviour
{
    public GameObject pill;
    private GameObject pill1;
    private GameObject pill2;
    private GameObject pill3;

    private void OnTriggerEnter(Collider other)
    {
        

        if (other.CompareTag("PillContainer"))
        {
            pill1 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
            pill2 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
            pill3 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);

            pill1.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
            pill2.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
            pill3.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
        }
    }
}