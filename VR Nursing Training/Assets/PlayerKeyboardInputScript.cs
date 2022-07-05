using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine;

public class PlayerKeyboardInputScript: MonoBehaviour
{
    public GameObject handLocation;
    public GameObject crosshair;
    public Camera activeCamera;
    public int pickUpSpeed = 1;
    public int pickUpDistance = 5;
    public float interactDistance = 1;
    public float useDistance = 2;

    public static bool VRLook = false;
    public static Vector3 targetVector;

    PlayerInput input;
    GameObject heldObject = null;
    bool pickUpObject = false;
    bool usingObject = false;
    bool putingDownObject;
    bool teleport;

    
    bool grabbingActive = false;
    

    void Awake()
    {
        input = new PlayerInput();
        input.CharacterControls.PickUp.performed += ctx => pickUpObject = ctx.ReadValueAsButton();
        input.CharacterControls.Use.performed += ctx => usingObject = ctx.ReadValueAsButton();
        input.CharacterControls.PutDown.performed += ctx => putingDownObject = ctx.ReadValueAsButton();
        input.CharacterControls.Teleport.performed += ctx => teleport = ctx.ReadValueAsButton();
        activeCamera = Camera.main;
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
        if (heldObject != null && !heldObject.activeSelf) { heldObject = null; }
        if (VRLook) // Only care about looking when VR is enabled
        {
            LookingAt(targetVector-activeCamera.transform.position);
        } 
        else
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
                LookingAt(activeCamera.transform.forward);
            }
        }
    }


    public void PickUp()
    {
        if (!grabbingActive)
        {
            RaycastHit hit;

            if (Physics.Raycast(activeCamera.transform.position, activeCamera.transform.forward, out hit, pickUpDistance, LayerMask.GetMask("Pickupable") + LayerMask.GetMask("Drawer"), QueryTriggerInteraction.Ignore))
            {

                if (hit.collider.gameObject.TryGetComponent<Pickupable>(out Pickupable scrpt))
                {
                    heldObject = hit.collider.gameObject;

                    Rigidbody targetRb = heldObject.GetComponent<Rigidbody>(); // Gets targets Rigidbody
                    targetRb.useGravity = false;
                    targetRb.isKinematic = true;
                    hit.collider.isTrigger = true;

                    StartCoroutine(DoPickUp(scrpt.focusOnPickup, scrpt.pickUpAngle));
                }
            }
        }
    }

    public void PutDown()
    {
        Rigidbody targetRb = heldObject.GetComponent<Rigidbody>();
        RaycastHit hit;
            
        if (Physics.Raycast(activeCamera.transform.position, activeCamera.transform.forward, out hit, 2, LayerMask.GetMask("Default"), QueryTriggerInteraction.Ignore) && hit.normal == Vector3.up && hit.transform.CompareTag("PlaceLocation"))
        {
            heldObject.transform.position = hit.point;

            heldObject.GetComponent<Collider>().isTrigger = false;
            targetRb.useGravity = true;
            targetRb.isKinematic = false;
            grabbingActive = false;

            heldObject.transform.SetParent(null);
            heldObject = null;
            crosshair.SetActive(true);
            MouseLook3D.flag = true;
        }
    }

    private void Use()
    {
        RaycastHit hit;
        if (Physics.Raycast(activeCamera.transform.position, activeCamera.transform.forward, out hit, pickUpDistance, LayerMask.GetMask("Interactable") + LayerMask.GetMask("Drawer"), QueryTriggerInteraction.Collide))
        {
            if (hit.collider.TryGetComponent<Interactable>(out Interactable script))
            {
                if (heldObject == null)
                {
                    script.Interact(handLocation); // Interact With Hands
                }
                else
                {
                    script.Interact(heldObject); // Pass interactable script the held objects collider
                }
            }
        }
    }
    private void Teleport()
    {
        RaycastHit hit;
        if (Physics.Raycast(activeCamera.transform.position, activeCamera.transform.forward, out hit, pickUpDistance, LayerMask.GetMask("Teleport"), QueryTriggerInteraction.Ignore))
        {
            transform.position = hit.collider.gameObject.transform.position;
        }
    }

    private void LookingAt(Vector3 target)
    {
        RaycastHit hit;
        if (Physics.Raycast(activeCamera.transform.position, target, out hit, pickUpDistance, ~0, QueryTriggerInteraction.Ignore))
        {
            if (hit.collider.TryGetComponent<DetectLooks>(out DetectLooks scrpt))
            {
                scrpt.PlayerIsLooking();
            }
        }
    }

    IEnumerator DoPickUp(bool focus, Vector3 focusAngle)
    {
        Vector3 targetLocation = handLocation.transform.position;
        Vector3 targetRotation = handLocation.transform.eulerAngles;
        float time = Time.time;
        bool pickingUp = true;
        grabbingActive = true;
        

        if (focus)
        {
            targetLocation = (activeCamera.transform.forward * .5f + activeCamera.transform.position);
            targetRotation = activeCamera.transform.eulerAngles + focusAngle;
            MouseLook3D.flag = false;
            crosshair.SetActive(false);
        }
        else
        {
            targetLocation = handLocation.transform.position;
            targetRotation = handLocation.transform.eulerAngles + focusAngle;
        }

        while (pickingUp)
        {
            double perc1 = Mathf.Clamp(Time.time - time, 0, .4f) / .4f;
            double percent = Mathf.Clamp((Mathf.Sin((float)(Mathf.PI / 6.0f + (perc1) * Mathf.PI / 3.0f)) - 0.5f) * 2.0f, 0, 1); 

            if ((Time.time - time) > .4)
            {
                percent = 1;
                pickingUp = false;
            }
            heldObject.transform.position = Vector3.Lerp(heldObject.transform.position, targetLocation, (float)percent);
            heldObject.transform.eulerAngles = Vector3.Lerp(heldObject.transform.eulerAngles, targetRotation, (float)percent); 

            yield return new WaitForEndOfFrame();
        }
        grabbingActive = false;
       
        heldObject.transform.SetParent(handLocation.transform);
    }


    /*private GameObject GetObjectInFront()
    {
        RaycastHit hit;
        if (Physics.Raycast(activeCamera.transform.position, activeCamera.transform.forward, out hit, pickUpDistance, LayerMask.GetMask("Pickupable") + LayerMask.GetMask("Drawer"), QueryTriggerInteraction.Ignore))
        {
            
            if (hit.collider.gameObject.TryGetComponent<Pickupable>(out Pickupable scrpt))
            {
                return hit.collider.gameObject;
            }
        }
        return null;
    }*/

}
