using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

// DEPRECATED
public class characterMovement3D : MonoBehaviour
{
    /*
    public GameObject camera3D;
    public GameObject handLocation;
    PlayerInput input;

    public double transitionSpeed = 0.25;
    public bool smoothPickup = true;
    public int interactRayCastDistance = 2;

    private Vector3 grabFrom;
    private Vector3 grabFromAngle;
    private double grabTime;

    public LayerMask raycastMask;
    public LayerMask interactMask;

    bool isClicking;
    bool isInteract;
    bool isLettingGo;

    bool interacted = false;
    bool clicked = false;
    bool letgo = false;
    bool forceletgo = false;

    bool grabComplete = false;


    //object placement things
    private bool placeStarted = false;
    //private bool placeOK = false;
    private Vector3 placePos;

    public GameObject placementTokenPrefab;
    private GameObject placementToken;

    public static bool changeModeToVR;

    public GameObject hud;

    private void Awake()
    {
        input = new PlayerInput();

        input.CharacterControls.PickUp.performed += ctx => isClicking = ctx.ReadValueAsButton();
        input.CharacterControls.Use.performed += ctx => isInteract = ctx.ReadValueAsButton();
        input.CharacterControls.PutDown.performed += ctx => isLettingGo = ctx.ReadValueAsButton();

        if (changeModeToVR)
        {
            transform.GetChild(1).gameObject.SetActive(false);
            transform.GetChild(0).gameObject.SetActive(true);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        checkHeldObjectValid();
        handleInteraction();
        handleMovement();
        handleLetgo();
        handleGrabAnim();
    }

    void checkHeldObjectValid(){
        if(handLocation.transform.childCount != 0){
            if(handLocation.transform.GetChild(0).gameObject.activeSelf == false){

                //maybe better to call returnHome and unparent.
                letgo = true;
                forceletgo = true;
                grabComplete = false;
                //Destroy(handLocation.transform.GetChild(0).gameObject);
                Debug.Log("Hand object invalid and destroyed");
            }
        }
    }

    void handleGrabAnim(){
        // Smoothly moves grabbed objects into one's hand
        if(handLocation.transform.childCount != 0){
            handLocation.transform.GetChild(0).gameObject.GetComponent<Collider>().isTrigger = true; ///
            if(grabComplete == false){

                GameObject gobj = handLocation.transform.GetChild(0).gameObject;
                double percent = 0.0f;
                if(smoothPickup){ //Use a sin function instead of a linear function
                    double perc1 = Mathf.Clamp(Time.time-(float)grabTime,0,(float)transitionSpeed)/transitionSpeed; //sin function 1
                    percent = Mathf.Clamp((Mathf.Sin((float)(Mathf.PI/6.0f + (perc1)*Mathf.PI/3.0f))-0.5f)*2.0f,0,1); //sin function 2

                    if((Time.time-(float)grabTime) > transitionSpeed){
                        percent = 1;
                    }
                }
                else{
                    percent = Mathf.Clamp(Time.time-(float)grabTime,0,(float)transitionSpeed)/transitionSpeed; //linear
                }

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
                    grabComplete = true;
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
        RaycastHit[] hits = Physics.RaycastAll(camera3D.transform.position, camera3D.transform.forward, interactRayCastDistance);
        //old used in if statement: Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, 2)



        //Instead of using the manual per-object function calls, we're using HoverableBase overrides.

        //TODO: Also call similar named functions on InteractableBase
        for (int i = 0; i < hits.Length; i++)
        {
            hit = hits[i];
            if (hit.collider.gameObject.GetComponent<HoverableBase>() != null) //1 of 2: Check if object is hoverablebase
            {
                hit.collider.gameObject.GetComponent<HoverableBase>().CursorHighlight(); //Cursor is over the object OR hand is near the object
                hit.collider.gameObject.GetComponent<HoverableBase>().LookHighlight(); // LookHighlight is the same as CursorHighlight for 3D
                //Debug.Log("Calling hoverableBase cursorHighlight in check 1");

                if(isInteract){
                    hit.collider.gameObject.GetComponent<HoverableBase>().CursorInteract();
                }
            }
            else
            { //2 of 2: Check if parent is hoverablebase

                if (hit.collider.gameObject.transform.parent != null && hit.collider.gameObject.transform.parent.GetComponent<HoverableBase>() != null)
                {
                    hit.collider.gameObject.transform.parent.GetComponent<HoverableBase>().CursorHighlight(); //Cursor is over the object OR hand is near the object
                    hit.collider.gameObject.transform.parent.GetComponent<HoverableBase>().LookHighlight(); // LookHighlight is the same as CursorHighlight for 3D
                    //Debug.Log("Calling hoverableBase cursorHighlight in check 1");
                    if(isInteract){
                        hit.collider.gameObject.transform.parent.GetComponent<HoverableBase>().CursorInteract();
                    }
                }
            }
        }
    */

        /*
        //Highlighting done here, runs regardless of if interaction key is pressed
        for(int i = 0; i < hits.Length; i++){
            hit = hits[i];

            //Dialog Button highlighting
            //if

            //InteractableDialogBtn focusbutton;
            if(hit.collider.gameObject.transform.parent != null){
                if(hit.collider.gameObject.transform.parent.GetComponent<InteractableDialogBtn>() != null){
                    hit.collider.gameObject.transform.parent.GetComponent<InteractableDialogBtn>().highlight();

                    if(isInteract){
                        hit.collider.gameObject.transform.parent.GetComponent<InteractableDialogBtn>().select();
                    }

                    //return;
                }
            }
        }
        */

    /*


        if (isInteract){
            Debug.Log("hit "+hits.Length+" objects");
            for(int i = 0; i < hits.Length; i++){
                
                if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, interactRayCastDistance) == true && hit.collider.gameObject.layer == 7 && hit.collider.gameObject.CompareTag("Handle") == false)
                {
                    Debug.Log("break on obj " + hit.collider.gameObject.name);
                    break;
                }

                if(hit.collider.gameObject.GetComponent<InteractableBase>() == null || hit.collider.gameObject.CompareTag("PillCutter") || hit.collider.gameObject.CompareTag("Ignore"))
                {
                    hit = hits[i];

                }
                


                if ( hit.collider.gameObject.GetComponent<InteractableBase>() != null)
                {
                    GameObject otherGameObject = hit.collider.gameObject;
                    if (handLocation.transform.childCount == 0) //hand is empty, pickup checks
                    {
                        if(hit.collider.gameObject.GetComponent<InteractableScript>() != null){ //Check if the target object is an InteractableScript and NOT a base class
                            grabFrom = otherGameObject.transform.position;
                            grabFromAngle = otherGameObject.transform.eulerAngles;
                            grabTime = Time.time;
                            otherGameObject.transform.SetParent(handLocation.transform);
                            //otherGameObject.transform.position = handLocation.transform.position;
                            otherGameObject.GetComponent<Rigidbody>().useGravity = false;
                            otherGameObject.GetComponent<Rigidbody>().isKinematic = true;
                            Debug.Log("break on obj "+i+", is an interactablescript");

                            if(otherGameObject.GetComponent<InteractableScript>().getFocusOnPickup()){
                                hud.SetActive(false);
                            }

                            //Perform the OnPickup invokation
                            otherGameObject.GetComponent<InteractableBase>().PickupInvoke();

                            break;
                        }
                        else if(hit.collider.gameObject.transform.parent != null && hit.collider.gameObject.transform.parent.GetComponent<InteractableScript>() != null)
                        {
                            otherGameObject = hit.collider.gameObject.transform.parent.gameObject;
                            grabFrom = otherGameObject.transform.position;
                            grabFromAngle = otherGameObject.transform.eulerAngles;
                            grabTime = Time.time;
                            otherGameObject.transform.SetParent(handLocation.transform);
                            //otherGameObject.transform.position = handLocation.transform.position;
                            otherGameObject.GetComponent<Rigidbody>().useGravity = false;
                            otherGameObject.GetComponent<Rigidbody>().isKinematic = true;
                            Debug.Log("break on obj " + i + ", PARENT is an interactablescript, using Parent as target");
                            if(otherGameObject.GetComponent<InteractableScript>().getFocusOnPickup()){
                                hud.SetActive(false);
                            }

                            //Perform the OnPickup invokation
                            otherGameObject.GetComponent<InteractableBase>().PickupInvoke();

                            break;
                        }
                        //else if (hit.collider.gameObject.GetComponent<PillCutterScript>() != null)
                        //    {
                        //        //...!?
                        //    }
                        else if(otherGameObject.GetComponent<InteractableBase>().canInteractWithHand())
                        {

                            otherGameObject.GetComponent<InteractableBase>().Interact(handLocation.GetComponent<Collider>());
                            Debug.Log("break on obj "+i+", is an interactable base and interacted with bare hands on object "+otherGameObject.name);
                            break;
                        }
                    } else
                    {
                        otherGameObject.GetComponent<InteractableBase>().Interact(handLocation.transform.GetChild(0).GetComponent<Collider>());
                        Debug.Log("break on obj "+i+", is an interactable base and interacted with held object");
                        break;
                    }
                }
            }
        }
    }


    void initPlace(){
        if(placeStarted==false){
            placeStarted=true;
            //placeOK=false;
            placePos = new Vector3(0,-100,0);
            placementToken = (GameObject) Instantiate(placementTokenPrefab, new Vector3(0,-100,0),Quaternion.identity);
        }
    }
    void finishPlace(){
        if(placeStarted==true){
            placeStarted=false;
            grabComplete = false;
            //placeOK=false;
            Destroy(placementToken);
            hud.SetActive(true);
            placementToken = null;
            //Perform the OnDrop invokation


        }
    }

    void checkPlace(){
        //One-stop function that you call while searching for a place to place the held object.
        initPlace(); //initialize place if we haven't yet
        //Do a raycast then search to see if the normal of the hit surface is UP.
        //if it is, update the placement vector and make it OK.

        //Initiate raycast from eye
        RaycastHit hit;
        int layerMask = ~0; //this means hit ALL layers
        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, 2, layerMask, QueryTriggerInteraction.Ignore) == true //Raycast good
            && hit.collider.gameObject.layer == 0 //Hit layer 0 (Default layer)
            && hit.normal == new Vector3(0, 1, 0) //Normal points upward
            && hit.transform.CompareTag("PlaceLocation")
        ){ //raycast success
            //Move our target puck there for a moment
    */
            /*
            placementToken.transform.position = hit.point;
            if(placementToken.GetComponent<TriggerTally>().collidersCount() == 0){
                placePos = hit.point;
                placeOK = true;
            }
            else{
                placementToken.transform.position=placePos;
            }
            */
            /*
            placementToken.transform.position = hit.point;
            if(placementToken.GetComponent<Place_ScanSurface>().placeOK()){
                placePos = hit.point;
                //placeOK = true;
            }
            else{
                placementToken.transform.position=placePos;
            }

            //check the bounding box of the token, if empty, then set the OK position there.
            //else, return the token to the last OK position.
        }


    }

    void attemptPlace(){
        if(handLocation.transform.childCount != 0){
            GameObject gobj = handLocation.transform.GetChild(0).gameObject;


            if (gobj.GetComponent<InteractableScript>().getFocusOnPickup() || forceletgo == true) //Clipboards and etc. MUST be placed down even if the puck can't work.
            {
                forceletgo = false;
                gobj.GetComponent<Collider>().isTrigger = false;
                Debug.Log("Releasing Focused object");

                handLocation.transform.DetachChildren();
                gobj.GetComponent<Rigidbody>().useGravity = true;
                gobj.GetComponent<Rigidbody>().isKinematic = false;
                gobj.GetComponent<InteractableScript>().PlaceDown();
                gobj.GetComponent<InteractableBase>().DropInvoke();
                
            }

            else if (placementToken != null && placementToken.GetComponent<Place_ScanSurface>().placeOK()) //Non-focus objects must be placed in the world
            {
                gobj.GetComponent<Collider>().isTrigger = false;
                Debug.Log("Releasing object");

                handLocation.transform.DetachChildren();
                gobj.GetComponent<Rigidbody>().useGravity = true;
                gobj.GetComponent<Rigidbody>().isKinematic = false;
                //gobj.GetComponent<InteractableScript>().PlaceDown();
                gobj.GetComponent<InteractableScript>().PlaceHere(placementToken.transform.position);
                gobj.GetComponent<InteractableBase>().DropInvoke();
            } else
            {
                //do nothing
               
                //gobj.GetComponent<InteractableScript>().PlaceDown();
            }
            
        }

        finishPlace();
    }

    void handleLetgo()
    {
        if(isLettingGo){
            if(handLocation.transform.childCount != 0){
                checkPlace();
            }
        }

        if(isLettingGo == true && letgo == true){
            return;
        }
        if(isLettingGo == false && letgo == true){ //reset state
            attemptPlace();
            letgo = false;
        }
        letgo = isLettingGo;


    */
        /*
        if(isLettingGo){

            if(handLocation.transform.childCount != 0){
                handLocation.transform.GetChild(0).gameObject.GetComponent<Collider>().isTrigger = false;
                Debug.Log("Releasing object");
                GameObject gobj = handLocation.transform.GetChild(0).gameObject;
                handLocation.transform.DetachChildren();
                gobj.GetComponent<Rigidbody>().useGravity = true;
                gobj.GetComponent<Rigidbody>().isKinematic = false;
                gobj.GetComponent<InteractableScript>().PlaceDown();
                grabComplete = false;
            }
        }
        */
        /*
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


        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, 10,raycastMask))
        {

            //TODO: CursorInteract() should be called here 




            //Teleportation zone highlighting
            if(hit.collider.gameObject.CompareTag("Teleport")){
                hit.collider.gameObject.transform.GetComponent<TeleportIndicatorScript>().indicatorActive(true);
                if (isClicking)
                {
                    Debug.Log("Hit!");
                    hit.collider.gameObject.transform.GetComponent<InteractableTeleportEvent>().TeleportEnter(); //trigger teleport event call
                    transform.position = hit.collider.gameObject.transform.position;
                }
            }
        }
        
        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, 10, raycastMask) && hit.collider.CompareTag("MenuPanel")) // Panel tag is on Menu Buttons
        {
            if (isClicking)
            {
                Debug.Log("MenuPanel Hit...");
                hit.collider.GetComponent<MenuButtonScript>().Interact(hit.collider.gameObject);
            }
        } 
    }

    private void OnEnable()
    {
        input.CharacterControls.Enable();
    }

    private void OnDisable()
    {
        input.CharacterControls.Disable();
    }
    */
}
