using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DipScript2 : Interactable
{
    public Material material;
    public UnityEvent handWash;
    public ParticleSystem BubbleAnimation;

    private void OnTriggerEnter(Collider other)
    {
        Interact(other.gameObject);
    }


    public override void Interact(GameObject other)
    {
        //Debug.Log("Interact w/ water");

        if (other.CompareTag("Hands"))
        {
            //Debug.Log("Washing Hands...");
            handWash.Invoke();
            BubbleAnimation.Play();
        }
        else if (other.GetComponent<Pickupable>())
        {
            other.GetComponent<Renderer>().material = material;
        }
    }

}
