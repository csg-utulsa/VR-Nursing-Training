using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class InteractableScript : InteractableBase, HoverableBase
{
    public UnityEvent onCombine;
    public UnityEvent interactEvent;
    public UnityEvent cursorHighlight;
    public UnityEvent lookHighlight;

    public Vector3 initialPosition;
    public Vector3 initialAngles;

    public Material material;
    public Material combineMaterial;

    public LayerMask layer;

    public GameObject[] targets;
    private GameObject respawnPoint;
    private GameObject touchedObject;

    private static int step;
    public float combineDist;
    public bool isInteractable;
    public string type;

    public bool interactWithHand = true;
    public bool focusOnPickup = false;
    public double distanceFromCamera = 0.5;
    public Vector3 focusAngles = new Vector3(0,0,0);




    public void CursorHighlight()
    {
        cursorHighlight.Invoke();
    }

    public void LookHighlight()
    {
        lookHighlight.Invoke();
    }

    public void CursorInteract()
    {
        //Do nothing, interactableBase interaction function takes over this
    }


    public override bool canInteractWithHand()
    {
        return interactWithHand;
    }

    private void Start()
    {
        
        step = 0;

        respawnPoint = new GameObject(gameObject.name + "'s respawn object"); //Logan added these
        respawnPoint.transform.position = gameObject.transform.position;
        if (gameObject.transform.parent != null)
        {
            respawnPoint.transform.parent = gameObject.transform.parent.transform;
        }
        initialPosition = gameObject.transform.position;

        initialAngles = gameObject.transform.eulerAngles;
        
        //Debug.Log("Object "+gameObject.name+", My position " + initialPosition+", Parent Position: "+ParentObjectTransform.position);
        //Debug.Log("Parent Position: " + ParentObjectTransform.position);

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

    public void setType(string newType)
    {
        type = newType;
    }
    
    public string getType()
    {
        return type;
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

    public bool getFocusOnPickup(){
        return focusOnPickup;
    }

    public Vector3 getFocusAngles(){
        return focusAngles;
    }

    public double getFocusDistance(){
        return distanceFromCamera;
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

    public override void Interact(Collider other)
    {
        Debug.Log("Interacted w/ InteractableScript on Obj");
        //CombineObject(other.gameObject);
        if (interactEvent != null)
        {
            interactEvent.Invoke();
        }
    }

  

    public void Reset() // Resets position of gameObj (used by ground trigger script)
    {

        
        gameObject.transform.position = respawnPoint.transform.position; //Logan added this

        //gameObject.transform.position = initialPosition;
        gameObject.transform.eulerAngles = initialAngles;

        gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }

    public void PlaceDown(){ // Places the object on a nearby surface
    //TODO: Currently just goes back home.
        Reset();
    }

    public void PlaceHere(Vector3 pos){
        //Places the object at this position.
        gameObject.transform.position = pos+new Vector3(0,0.1f,0);
        gameObject.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }

}
