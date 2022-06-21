using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine;

public class PlayerKeyboardInputScript: MonoBehaviour
{
    public GameObject handLocation;
    public Camera camera3D;
    public bool focus;
    public int pickUpSpeed = 1;
    public int pickUpDistance = 5;
    public float interactDistance = 1;
    public float useDistance = 2;

    PlayerInput input;
    GameObject heldObject;
    bool pickUpObject = false;
    bool usingObject = false;
    bool putingDownObject;
    bool teleport;
    bool VRActive = false;
    bool grabbingActive = false;
    

    void Awake()
    {
        input = new PlayerInput();
        input.CharacterControls.PickUp.performed += ctx => pickUpObject = ctx.ReadValueAsButton();
        input.CharacterControls.Use.performed += ctx => usingObject = ctx.ReadValueAsButton();
        input.CharacterControls.PutDown.performed += ctx => putingDownObject = ctx.ReadValueAsButton();
        input.CharacterControls.Teleport.performed += ctx => teleport = ctx.ReadValueAsButton();
    }
    private void OnEnable()
    {
        input.CharacterControls.Enable();
    }

    private void OnDisable()
    {
        input.CharacterControls.Disable();
    }

    void Update()
    {

        if ((pickUpObject && heldObject == null) || grabbingActive)
        {
            pickUpObject = false;
            PickUp();
        } 
        else if(usingObject)
        {
            usingObject = false;
            Use();
        } 
        else if (putingDownObject && heldObject != null)
        {
            putingDownObject = false;
            PutDown();
        }
        else if(teleport)
        {
            teleport = false;
            Teleport();
        } 
        else
        {
            LookingAt();
        }
    }


    public void PickUp()
    {

        if (!grabbingActive)
        {
            GameObject target = GetObjectInFront(); // Sets target object
            if (target == null) return; // checks if target exists
            Rigidbody targetRb = target.GetComponent<Rigidbody>(); // Gets targets Rigidbody
            targetRb.useGravity = false;
            targetRb.isKinematic = true;
            grabbingActive = true;
            heldObject = target;
        }

        heldObject.transform.position = Vector3.Slerp(heldObject.transform.position, handLocation.transform.position, Time.deltaTime * pickUpSpeed);
        
        if (Vector3.Distance(heldObject.transform.position, handLocation.transform.position) <= 0.01) // Target is Held
        {
            heldObject.transform.SetParent(handLocation.transform);
            grabbingActive = false;
        }
      
    }

    public void PutDown()
    {
        Rigidbody targetRb = heldObject.GetComponent<Rigidbody>();
        RaycastHit hit;
            
        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, 2, LayerMask.GetMask("Default"), QueryTriggerInteraction.Ignore) && hit.normal == Vector3.up && hit.transform.CompareTag("PlaceLocation"))
        {
            heldObject.transform.position = hit.point;
            targetRb.useGravity = true;
            targetRb.isKinematic = false;
            grabbingActive = false;
            heldObject.transform.SetParent(null);
            heldObject = null;
        }
    }

    private void Use()
    {
        RaycastHit hit;
        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, pickUpDistance, LayerMask.GetMask("Interactable"), QueryTriggerInteraction.Ignore))
        {
            if (heldObject == null)
            {
                hit.collider.gameObject.GetComponent<Interactable>().Interact(handLocation); // Interact With Hands
            }
            hit.collider.gameObject.GetComponent<Interactable>().Interact(heldObject); // Pass interactable script the held objects collider
        }
    }
    private void Teleport()
    {
        RaycastHit hit;
        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, pickUpDistance, LayerMask.GetMask("Teleport"), QueryTriggerInteraction.Ignore))
        {
            transform.position = hit.collider.gameObject.transform.position;
        }
    }

    private void LookingAt()
    {
        RaycastHit hit;
       // Debug.Log("Check Looks");
        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, pickUpDistance, ~0, QueryTriggerInteraction.Ignore))
        {
            if (hit.collider.TryGetComponent<DetectLooks>(out DetectLooks scrpt))
            {
                //Debug.Log("StartingLook");
                scrpt.PlayerIsLooking();
            }
        }
    }

    private GameObject GetObjectInFront()
    {
        RaycastHit hit;
        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, pickUpDistance, LayerMask.GetMask("Pickupable"), QueryTriggerInteraction.Ignore))
        {
            Debug.Log(hit.collider.name);
            if (hit.collider.gameObject.TryGetComponent<Pickupable>(out Pickupable scrpt))
            {
                return hit.collider.gameObject;
            }
        }
        return null;
    }

}
