using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableScript : MonoBehaviour
{
    private bool isInteractable;
    public Vector3 initialPosition;
    public GameObject target;
    public Material material;
    private void Start()
    {
        initialPosition = gameObject.transform.position;
        isInteractable = true;
        setMaterial(material);
    }

    public void setTarget(GameObject inputTarget)
    {
        target = inputTarget;
    }

    public GameObject getTarget()
    {
        return target;
    }

    public void setInteractable(bool input)
    {
        isInteractable = input;
    }

    public bool getisInteractable()
    {
        return isInteractable;
    }

    public void setMaterial(Material iMaterial)
    {
        GetComponent<Renderer>().material = iMaterial;
    }

    public void Reset()
    {
        gameObject.transform.position = initialPosition;
        gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }

}
