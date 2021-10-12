using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PillSpawnScript : InteractableBase
{
    public GameObject pill;
    private GameObject pill1;
    private GameObject pill2;
    private GameObject pill3;
    public UnityEvent<string> onSpawn;


    public override bool canInteractWithHand(){
        return false;
    }

    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        if (other.CompareTag("PillContainer"))
        {
            pill1 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
            pill2 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
            pill3 = Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);

            pill1.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
            pill2.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
            pill3.GetComponent<InteractableScript>().setType(other.gameObject.GetComponent<InteractableScript>().getType());
            onSpawn.Invoke(other.gameObject.GetComponent<InteractableScript>().getType());
        }
    }
}
