using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SanitizerScript : InteractableBase
{
    public UnityEvent sanitizeHands;
    public ParticleSystem BubbleAnimation;
    public List<GameObject> inactiveTeles = new List<GameObject>();

    private void Awake()
    {
        ActivateObjects(false);
    }

    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            Debug.Log("Sanitizing Hands...");
            ActivateObjects(true);
            sanitizeHands.Invoke();
            BubbleAnimation.Play();
        }
    }

    private void ActivateObjects(bool isActive)
    {
        Debug.Log("ActivateObjects() is being called");
        if (inactiveTeles.Count > 0)
        {
            for (int i = 0; i < inactiveTeles.Count; i++)
            {
                inactiveTeles[i].SetActive(isActive);
            }
        }
    }

    /*private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            BubbleAnimation.Stop();
        }
    }*/
}

