using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractableScript : MonoBehaviour
{
    private bool isInteractable;
    public Vector3 initialPosition;
    public GameObject target;
    public Material material;
    public LayerMask layer;
    public Material combineMaterial;
    public float combineDist;
    private GameObject touchedObject;

    private void Start()
    {
        initialPosition = gameObject.transform.position; // Saves starting location
        isInteractable = true;
        if(material != null)
        {
            setMaterial(material);
        }
        
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

    public Material getMaterial()
    {
        return(GetComponent<Renderer>().material);
    }

    private void FixedUpdate()
    {
        if (target != null)
        {
            Collider[] colliders = Physics.OverlapSphere(transform.position, combineDist, layer);
            if (colliders.Length > 1)
            {
                touchedObject = colliders[0].gameObject;
            }
            else
            {
                touchedObject = null;
            }
            if (touchedObject == target)
            {
                CombineObject(touchedObject);
            }
        }
    }

    public void CombineObject(GameObject touchedObj)
    {
        touchedObj.SetActive(false);
        setMaterial(combineMaterial);
    }

    public void Reset()
    {
        gameObject.transform.position = initialPosition;
        gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }

}
