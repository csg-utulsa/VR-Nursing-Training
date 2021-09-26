using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class characterMovement3D : MonoBehaviour
{
    public GameObject camera;

    PlayerInput input;

    bool isClicking;
    bool isInteract;

    bool interacted = false;

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
        
        handleMovement();
        handleInteraction();
    }

    void handleInteraction()
    {
        RaycastHit hit;
        if (isInteract && Physics.Raycast(camera.transform.position, camera.transform.forward, out hit, 2) && hit.collider.gameObject.GetComponent<InteractableScript>() != null)
        {
            Debug.Log("Interact!");
        }
    }

    void handleMovement()
    {
        RaycastHit hit;

        if(isClicking == true && interacted == true){
            return;
        }
        if(isClicking == false && interacted == true){ //reset state
            interacted = false;
        }
        interacted = isClicking;

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
