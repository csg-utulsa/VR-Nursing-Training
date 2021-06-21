using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class InteractableScript : MonoBehaviour
{
    public bool isInteractable;
    public Vector3 initialPosition;
    public GameObject[] targets;
    public Material material;
    public LayerMask layer;
    public Material combineMaterial;
    public float combineDist;
    private GameObject touchedObject;
    private static int step = 0;
    public UnityEvent onCombine;

    private void Start()
    {
        initialPosition = gameObject.transform.position; // Saves starting location
        isInteractable = true;
        if(material != null) 
        {
            setMaterial(material); // Sets starting material
        }
        
    }

    public void setTarget(GameObject inputTarget) // Probably doesn't work havn't used yet
    {
        targets[step] = inputTarget;
    }

    public GameObject getTarget() // Returns current target
    {
        return targets[step];
    }

    public void setInteractable(bool input) 
    {
        isInteractable = input;
    }

    public bool getisInteractable() // Returns true if "isInteractable = true"
    {
        return isInteractable;
    }

    public void setMaterial(Material iMaterial) // Sets material of gameObj
    {
        GetComponent<Renderer>().material = iMaterial;
    }

    public Material getMaterial() // Returns Material of gameObj (probably not needed)
    {
        return(GetComponent<Renderer>().material);
    }

    private void FixedUpdate()
    {
        if (targets.Length > 0 && step < targets.Length && targets[step] != null)
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
            if (touchedObject == targets[step])
            {
                CombineObject(touchedObject);
            }
        }
    }

    public void CombineObject(GameObject touchedObj) // Logic for combining gameObjs
    {
        // Anything that needs to be transferred or continued with the combined obj needs to go in here
        touchedObj.SetActive(false);
        setMaterial(combineMaterial);

        onCombine.Invoke();

        step++;
        if (targets != null && step < targets.Length)
        {
            combineMaterial = targets[step].GetComponent<InteractableScript>().combineMaterial;
        }
    }

    public void Reset() // Resets position of gameObj (used by ground trigger script)
    {
        gameObject.transform.position = initialPosition;
        gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }

}
