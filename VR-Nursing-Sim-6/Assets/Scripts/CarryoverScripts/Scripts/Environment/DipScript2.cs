using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DipScript2 : Interactable
{
    public Material material;
    public UnityEvent handWash;
    public ParticleSystem BubbleAnimation;

    public override void Interact(GameObject other)
    {
        if (other.CompareTag("Hands"))
        {
            handWash.Invoke();
            BubbleAnimation.Play();
        }
        else if (other.GetComponent<Pickupable>())
        {
            other.GetComponent<Renderer>().material = material;
        }
    }

}
