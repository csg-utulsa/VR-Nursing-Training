using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class characterMovement3D : MonoBehaviour
{
    public GameObject camera3D;
    public GameObject handLocation;
    PlayerInput input;

    public double transitionSpeed =0.25;

    private Vector3 grabFrom;
    private Vector3 grabFromAngle;
    private double grabTime;

    public LayerMask raycastMask;

    bool isClicking;
    bool isInteract;
    bool isLettingGo;

    bool interacted = false;
    bool clicked = false;
    bool letgo = false;

    bool grabComplete = false;



    private void Awake()
    {
        input = new PlayerInput();

        input.CharacterControls3D.Click.performed += ctx => isClicking = ctx.ReadValueAsButton();
        input.CharacterControls3D.Interact.performed += ctx => isInteract = ctx.ReadValueAsButton();
        input.CharacterControls3D.Letgo.performed += ctx => isLettingGo = ctx.ReadValueAsButton();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        checkHeldObjectValid();
        handleMovement();
        handleInteraction();
        handleLetgo();
        handleGrabAnim();
    }

    void checkHeldObjectValid(){
        if(handLocation.transform.childCount != 0){
            if(handLocation.transform.GetChild(0).gameObject.activeSelf == false){

                //maybe better to call returnHome and unparent.
                isLettingGo=true;

                //Destroy(handLocation.transform.GetChild(0).gameObject);
                //Debug.Log("Hand object invalid and destroyed");
            }
        }
    }

    void handleGrabAnim(){
        // Smoothly moves grabbed objects into one's hand
        if(handLocation.transform.childCount != 0){
            if(grabComplete == false){
                GameObject gobj = handLocation.transform.GetChild(0).gameObject;
                double percent = Mathf.Clamp(Time.time-(float)grabTime,0,(float)transitionSpeed)/transitionSpeed;
                InteractableScript interactableScript = gobj.GetComponent<InteractableScript>();
                if(interactableScript.getFocusOnPickup()){ //Move in front of camera
                    Vector3 focusPos = camera3D.transform.forward*(float)interactableScript.getFocusDistance() + camera3D.transform.position;
                    Vector3 focusAng = camera3D.transform.eulerAngles + interactableScript.getFocusAngles();
                    gobj.transform.position = Vector3.Lerp(grabFrom,focusPos,(float)percent);
                    gobj.transform.eulerAngles = Vector3.Lerp(grabFromAngle,focusAng,(float)percent);

                }
                else{ //Move to hand
                    gobj.transform.position = Vector3.Lerp(grabFrom,handLocation.transform.position,(float)percent);
                    //Debug.Log("Moving position... "+percent);
                }
                if(percent == 1){
                    //grabComplete = true;
                }
            }

        }
    }

    void handleInteraction()
    {

        if(isInteract == true && interacted == true){
            return;
        }
        if(isInteract == false && interacted == true){ //reset state
            interacted = false;
        }
        interacted = isInteract;

        RaycastHit hit;

        
        if (isInteract && Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, 2) && hit.collider.gameObject.GetComponent<InteractableBase>() != null)
        {
            GameObject otherGameObject = hit.collider.gameObject;
            if (handLocation.transform.childCount == 0)
            {
                if(hit.collider.gameObject.GetComponent<InteractableScript>() != null){ //Check if the target object is an InteractableScript and NOT a base class
                    grabFrom = otherGameObject.transform.position;
                    grabFromAngle = otherGameObject.transform.eulerAngles;
                    grabTime = Time.time;
                    otherGameObject.transform.SetParent(handLocation.transform);
                    //otherGameObject.transform.position = handLocation.transform.position;
                    otherGameObject.GetComponent<Rigidbody>().useGravity = false;
                    otherGameObject.GetComponent<Rigidbody>().isKinematic = true;
                }
            } else
            {
                otherGameObject.GetComponent<InteractableBase>().Interact(handLocation.transform.GetChild(0).GetComponent<Collider>());
            }
        }
    }

    void handleLetgo()
    {

        if(isLettingGo == true && letgo == true){
            return;
        }
        if(isLettingGo == false && letgo == true){ //reset state
            letgo = false;
        }
        letgo = isLettingGo;

        if(isLettingGo){
            if(handLocation.transform.childCount != 0){
                Debug.Log("Releasing object");
                GameObject gobj = handLocation.transform.GetChild(0).gameObject;
                handLocation.transform.DetachChildren();
                gobj.GetComponent<Rigidbody>().useGravity = true;
                gobj.GetComponent<Rigidbody>().isKinematic = false;
                gobj.GetComponent<InteractableScript>().PlaceDown();
                grabComplete = false;
            }
        }
    }

    void handleMovement()
    {
        RaycastHit hit;

        if(isClicking == true && clicked == true){
            return;
        }
        if(isClicking == false && clicked == true){ //reset state
            clicked = false;
        }
        clicked = isClicking;



        if (isClicking && Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, 10,raycastMask) && hit.collider.gameObject.CompareTag("Teleport"))
        {
            Debug.Log("Hit!");
            transform.position = hit.collider.gameObject.transform.parent.position;
        }
    }

    private void OnEnable()
    {
        input.CharacterControls3D.Enable();
    }

    private void OnDisable()
    {
        input.CharacterControls3D.Disable();
    }
}
