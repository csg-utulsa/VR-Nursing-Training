using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine;

// Made by: Brennan Crowder
// Modified: 7/8/22

public class PlayerKeyboardInputScript: MonoBehaviour
{
    [Header("GameObject References:")]
    [Tooltip("Location where objects will be held.")]
    [SerializeField] GameObject _handLocation;

    [Tooltip("Canvas with crosshair")]
    [SerializeField] GameObject _crosshair;

    [Space(10)]
    [Header("Input Settings:")]
    [Tooltip("Speed at which objects get picked up.")]
    [SerializeField] float _pickUpSpeed = 1;

    [Tooltip("Max distance an item can be picked up.")]
    [SerializeField] float _pickUpDistance = 5;

     [Tooltip("Max distance an item can be interacted with")]
    [SerializeField] float _teleportDistance = 5;
    
     [Tooltip("Max distance an item can be used")]
    [SerializeField] float _useDistance = 2;

    [Tooltip("Max distance an object will call DetectLooks event.")]
    [SerializeField] float _lookAtDistance = 2;
    
    /// <summary>
    /// If true will runs the look at script passing the targetVector.
    /// </summary>
    public static bool VRLook = false;

    /// <summary>
    /// Used by LookingAt method to check if the player is looking at target vector.
    /// </summary>
    public static Vector3 TargetVector;

    /// <summary>
    /// Reference to the scenes active main camera. Set in Awake.
    /// </summary>
    private Camera _activeCamera;

    /// <summary>
    /// Reference to the input system. Set in Awake.
    /// </summary>
    private PlayerInput _input;

    /// <summary>
    /// Reference to the object currently held.
    /// </summary>
    private GameObject _heldObject = null;

    /// <summary>
    /// Input listener for picking up objects.
    /// </summary>
    private bool _pickUpObject = false;

    /// <summary>
    /// Input listener for using objects.
    /// </summary>
    private bool _usingObject = false;

    /// <summary>
    /// Input listener for putting down objects.
    /// </summary>
    private bool _putingDownObject = false;

    /// <summary>
    /// Input listener for teleporting.
    /// </summary>
    private bool _teleport;

    /// <summary>
    /// Set to true when the couroutine DoPickUp is running.
    /// </summary>
    private bool _grabbingActive = false;

    /// <summary>
    /// Coroutine delay cached.
    /// </summary>
    private WaitForEndOfFrame _EOF;

    /// <summary>
    /// Sets references to Input System, Input Listeners, and activeCamera
    /// </summary>
    void Awake()
    {
        _input = new PlayerInput();
        _input.CharacterControls.PickUp.performed += ctx => _pickUpObject = ctx.ReadValueAsButton();
        _input.CharacterControls.Use.performed += ctx => _usingObject = ctx.ReadValueAsButton();
        _input.CharacterControls.PutDown.performed += ctx => _putingDownObject = ctx.ReadValueAsButton();
        _input.CharacterControls.Teleport.performed += ctx => _teleport = ctx.ReadValueAsButton();
        _activeCamera = Camera.main;
    }

    /// <summary>
    /// Enables the input system.
    /// </summary>
    private void OnEnable()
    {
        _input.CharacterControls.Enable();
    }

    /// <summary>
    /// Disables the input system.
    /// </summary>
    private void OnDisable()
    {
        _input.CharacterControls.Disable();
    }

    /// <summary>
    /// Checks for input listeners and performs their various actions.
    /// </summary>
    private void Update()
    {
        // If held object is inactive remove reference.
        if (_heldObject != null && !_heldObject.activeSelf) 
        { 
            _heldObject = null; 
        }

        if (VRLook)
        {
            LookingAt(TargetVector-_activeCamera.transform.position);
        } 
        else
        {
            if (_teleport)
            {
                _teleport = false;
                Teleport();
            }
            else if ((_pickUpObject && !_grabbingActive && _heldObject == null))
            {
                _pickUpObject = false;
                PickUp();
            } 
            else if (_putingDownObject  && _heldObject != null) //&& !_grabbingActive
            {
                _putingDownObject = false;
                PutDown();
            }
            
            else if(_usingObject) // !_grabbingActive && 
            {
                _usingObject = false;
                Use();
            } 
            else
            {
                LookingAt(_activeCamera.transform.forward);
            }
        }
    }

    /// <summary>
    /// Attempts to pick up an object in front of it with the Pickupable script and Layer.
    /// </summary>
    private void PickUp()
    {
        if (!_grabbingActive)
        {
            RaycastHit hit;

            if (Physics.Raycast(_activeCamera.transform.position, _activeCamera.transform.forward, out hit, _pickUpDistance, LayerMask.GetMask("Pickupable") + LayerMask.GetMask("Drawer"), QueryTriggerInteraction.Ignore))
            {

                if (hit.collider.gameObject.TryGetComponent<Pickupable>(out Pickupable scrpt))
                {
                    _heldObject = hit.collider.gameObject;

                    Rigidbody targetRb = _heldObject.GetComponent<Rigidbody>();
                    targetRb.useGravity = false;
                    targetRb.isKinematic = true;
                    hit.collider.enabled = false;

                    StartCoroutine(DoPickUp(scrpt.focusOnPickup, scrpt.pickUpAngle));
                }
            }
        }
    }

    /// <summary>
    /// Puts down held object at location player is looking if the player is looking at a flat surface.
    /// </summary>
    private void PutDown()
    {
        Rigidbody targetRb = _heldObject.GetComponent<Rigidbody>();
        Pickupable heldObjScrpt = _heldObject.GetComponent<Pickupable>();
        RaycastHit hit;

        if (heldObjScrpt.focusOnPickup)
        {
            heldObjScrpt.ResetObject();
            MouseLook3D.flag = true;
        }

        if (Physics.Raycast(_activeCamera.transform.position, _activeCamera.transform.forward, out hit, _pickUpDistance, LayerMask.GetMask("Default"), QueryTriggerInteraction.Ignore) && hit.normal == Vector3.up && hit.transform.CompareTag("PlaceLocation"))
        {
            _heldObject.GetComponent<Collider>().enabled = true;
            targetRb.useGravity = true;
            targetRb.isKinematic = false;
            _grabbingActive = false;

            if (heldObjScrpt.useCustomDropRotation) 
            {
                heldObjScrpt.ResetCustomRotation();
            }
            else
            {
                heldObjScrpt.ResetRotation();
            }
            
            if (!heldObjScrpt.focusOnPickup)
            {
                _heldObject.transform.position = hit.point;
            } 

            _crosshair.SetActive(true);
            _heldObject.transform.SetParent(null);
            _heldObject = null;
        }
    }

    /// <summary>
    /// Will attempt to call the Interactable script on the object the player is looking at. Passes the heldObject or hand gameobject to the Interactable script on target.
    /// </summary>
    private void Use()
    {
        RaycastHit hit;
        if (Physics.Raycast(_activeCamera.transform.position, _activeCamera.transform.forward, out hit, _useDistance, LayerMask.GetMask("Interactable") + LayerMask.GetMask("Drawer"), QueryTriggerInteraction.Collide))
        {
            if (hit.collider.TryGetComponent<Interactable>(out Interactable script))
            {
                if (_heldObject == null)
                {
                    script.Interact(_handLocation); // Interact With Hands
                }
                else
                {
                    script.Interact(_heldObject); // Pass interactable script the held objects collider
                }
            }
        }
    }

    /// <summary>
    /// Teleports the player to the teleport zone if they are looking at one.
    /// </summary>
    private void Teleport()
    {
        RaycastHit hit;
        if (Physics.Raycast(_activeCamera.transform.position, _activeCamera.transform.forward, out hit, _teleportDistance, LayerMask.GetMask("Teleport"), QueryTriggerInteraction.Ignore))
        {
            _usingObject = false;
            _putingDownObject = false;
            _pickUpObject = false;
            transform.position = hit.collider.gameObject.transform.position;
        }
    }

    /// <summary>
    /// Activates DetectLooks script if raycast from activeCamera's position to target position hits object with detect looks script.
    /// </summary>
    /// <param name="target">position for direction of raycast</param>
    private void LookingAt(Vector3 target)
    {
        RaycastHit hit;

        if (Physics.Raycast(_activeCamera.transform.position, target, out hit, _lookAtDistance, ~0, QueryTriggerInteraction.Ignore))
        {
            if (hit.collider.TryGetComponent<DetectLooks>(out DetectLooks scrpt))
            {
                scrpt.PlayerIsLooking();
            }
        }
    }

    /// <summary>
    /// Called by PickUp. Over time will move the target object to the hand location.
    /// </summary>
    /// <param name="focus">If true will focus the object based on focus angle.</param>
    /// <param name="focusAngle">Angle that the target object will be focused.</param>
    /// <returns></returns>
    IEnumerator DoPickUp(bool focus, Vector3 focusAngle)
    {
        Vector3 targetLocation;
        Vector3 targetRotation;
        float time = Time.time;
        bool pickingUp = true;
        _grabbingActive = true;
        

        if (focus)
        {
            targetLocation = (_activeCamera.transform.forward * .5f + _activeCamera.transform.position);
            targetRotation = _activeCamera.transform.eulerAngles + focusAngle;
            MouseLook3D.flag = false;
            _crosshair.SetActive(false);
        }
        else
        {
            _heldObject.transform.SetParent(_handLocation.transform);
            targetLocation = _handLocation.transform.position;
            targetRotation = _handLocation.transform.eulerAngles + focusAngle;
        }

        // Picking up animation loop
        while (pickingUp && _grabbingActive)
        {
           if ( _heldObject == null)
            {
                pickingUp = false;
                break;
            }
            float perc1 = Mathf.Clamp(Time.time - time, 0, _pickUpSpeed) / _pickUpSpeed;
            float percent = Mathf.Clamp((Mathf.Sin((float)(Mathf.PI / 6.0f + (perc1) * Mathf.PI / 3.0f)) - 0.5f) * 2.0f, 0, 1);

            if ((Time.time - time) > _pickUpSpeed || _heldObject.transform.position == targetLocation)
            {
                percent = 1;
            }
            
            if (focus) 
            {
                _heldObject.transform.position = Vector3.Lerp(_activeCamera.transform.position, targetLocation, percent);
                _heldObject.transform.eulerAngles = Vector3.Lerp(_activeCamera.transform.eulerAngles, targetRotation, percent);
            } else 
            {
                _heldObject.transform.position = Vector3.Lerp(_heldObject.transform.position,_handLocation.transform.position,percent);
            }
            
            if (percent == 1)
            {
                pickingUp = false;
            }
            yield return _EOF;
        }
        _grabbingActive = false;
        
    }
}
