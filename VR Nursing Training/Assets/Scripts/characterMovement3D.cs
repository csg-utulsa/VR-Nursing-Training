using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class characterMovement3D : MonoBehaviour
{
    public GameObject camera;
    public GameObject handLocation;
    PlayerInput input;

    bool isClicking;
    bool isInteract;

    bool interacted = false;
    bool clicked = false;

    private void Awake()
    {
        input = new PlayerInput();

        input.CharacterControls3D.Click.performed += ctx => isClicking = ctx.ReadValueAsButton();
        input.CharacterControls3D.Interact.performed += ctx => isInteract = ctx.ReadValueAsButton();
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
    }

    void checkHeldObjectValid(){
        if(handLocation.transform.childCount != 0){
            if(handLocation.transform.GetChild(0).gameObject.activeSelf == false){
                Destroy(handLocation.transform.GetChild(0).gameObject);
                Debug.Log("Hand object let go");
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

        
        if (isInteract && Physics.Raycast(camera.transform.position, camera.transform.forward, out hit, 2) && hit.collider.gameObject.GetComponent<InteractableBase>() != null)
        {
            GameObject otherGameObject = hit.collider.gameObject;
            if (handLocation.transform.childCount == 0)
            {
               
                otherGameObject.transform.SetParent(handLocation.transform);
                otherGameObject.transform.position = handLocation.transform.position;
                otherGameObject.GetComponent<Rigidbody>().useGravity = false;
            } else
            {
                otherGameObject.GetComponent<InteractableBase>().Interact(handLocation.transform.GetChild(0).GetComponent<Collider>());
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

        if (isClicking && Physics.Raycast(camera.transform.position, camera.transform.forward, out hit, 10) && hit.collider.gameObject.CompareTag("Teleport"))
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
