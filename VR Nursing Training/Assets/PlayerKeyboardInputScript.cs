using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine;
using UnityEngine.SceneManagement;

// Made by: Brennan Crowder
// Modified: 7/26/22

public class PlayerKeyboardInputScript: MonoBehaviour
{
    [Space(3),Header("GameObject References:")]
    [Tooltip("Location where objects will be held."), SerializeField]
    private GameObject _handLocation;

    [Tooltip("Canvas with crosshair"), SerializeField]
    private GameObject _crosshair;

    [Tooltip("Reference to the active camera."), SerializeField]
    private Camera _activeCamera;

    [Space(3), Header("Input Settings:")]

    [Tooltip("Mouse sensitivity"), SerializeField]
    private float _mouseSensitivity = .1f;

    [Tooltip("Time it takes to pick up an item in seconds."), SerializeField]
    private float _pickUpTime = 1f;

    [Tooltip("Speed at which objects will be focused"), SerializeField]
    private float _focusSpeed = .5f;
     
    [Tooltip("Max distance an item can be picked up."), SerializeField] 
    private float _pickUpDistance = 2f;

     [Tooltip("Max distance an item can be interacted with"), SerializeField]
    private float _teleportDistance = 5f;
    
     [Tooltip("Max distance an item can be used"), SerializeField]
    private float _useDistance = 2f;

    [Tooltip("Max distance an object will call DetectLooks event."), SerializeField]
    private float _lookAtDistance = 2f;

    [Tooltip("Enable to debug all input events."), SerializeField]
    private bool fullDebugging = false;

    /// <summary>
    /// Tracks left and right rotation from mouse
    /// </summary>
    private float _deltaYRotation = 0f;

    /// <summary>
    /// Tracks up and down rotation from mouse
    /// </summary>
    private float _deltaXRotation = 0f;

    /// <summary>
    /// If set true freezes camera / mouse rotation
    /// </summary>
    private bool _mouseLock = false;

    /// <summary>
    /// If true will runs the look at script passing the targetVector.
    /// </summary>
    public static bool VRLook = false; // Outdated and no longer used, only kept here to keep old VRLook script from throwing errors

    /// <summary>
    /// Used by LookingAt method to check if the player is looking at target vector.
    /// </summary>
    public static Vector3 TargetVector;
   
    /// <summary>
    /// Reference to the input system. Set in Awake.
    /// </summary>
    private PlayerInput _input;

    /// <summary>
    /// Reference to the object currently held.
    /// </summary>
    private GameObject _heldObject = null;

    /// <summary>
    /// Set to true when the couroutine DoPickUp is running.
    /// </summary>
    private bool _grabbingActive = false;

    /// <summary>
    /// Coroutine delay cached.
    /// </summary>
    private WaitForEndOfFrame _EOF;

    /// <summary>
    /// Set true if XRRigSingleton has vr active
    /// </summary>
    private bool vrActive;


    /// <summary>
    /// Sets references to Input System, Input Listeners, and activeCamera
    /// </summary>
    void Awake()
    {
        _input = new PlayerInput();
        _input.CharacterControls.PickUp.started += PickUp;//ctx => _pickUpObject = ctx.ReadValueAsButton();
        _input.CharacterControls.Use.started += Use;//ctx => _usingObject = ctx.ReadValueAsButton();
        _input.CharacterControls.PutDown.started += PutDown;//ctx => _putingDownObject = ctx.ReadValueAsButton();
        _input.CharacterControls.Teleport.canceled += Teleport;//ctx => _teleport = ctx.ReadValueAsButton();
        _input.CharacterControls.MouseLook.performed += MouseLook;
        Cursor.lockState = CursorLockMode.Locked;
    }

    /// <summary>
    /// Destroys any held items at time of level being loaded
    /// </summary>
    /// <param name="level"></param>
    private void OnLevelLoaded(Scene scene, LoadSceneMode mode)
    {
        if (_heldObject != null)
        {
            Destroy(_heldObject);
        }
        var xRRigSingleton = XRRigSingleton.xrs;
        vrActive = xRRigSingleton.getVRActive();
        if (vrActive)
        {
            _activeCamera = xRRigSingleton.getActiveCamera();
        }
        
    }

    /// <summary>
    /// Enables the input system.
    /// </summary>
    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnLevelLoaded;
        _input.CharacterControls.Enable();
    }

    /// <summary>
    /// Disables the input system.
    /// </summary>
    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnLevelLoaded;
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
            _heldObject.GetComponent<Pickupable>().OnPutDown();
            UnParent(_heldObject);
            _heldObject = null; 
        }
        else if (!vrActive)
        {
            LookingAt(_activeCamera.transform.forward);
        }
    }

    /// <summary>
    /// Attempts to pick up an object in front of it with the Pickupable script and Layer.
    /// </summary>
    private void PickUp(InputAction.CallbackContext args)
    {
        if (!_grabbingActive && _heldObject == null)
        {
            RaycastHit hit;

            if (Physics.Raycast(_activeCamera.transform.position, _activeCamera.transform.forward, out hit, _pickUpDistance, LayerMask.GetMask("Pickupable") + LayerMask.GetMask("Drawer"), QueryTriggerInteraction.Ignore))
            {

                if (hit.collider.gameObject.TryGetComponent<Pickupable>(out Pickupable scrpt))
                {
                    if (fullDebugging)
                    {
                        Debug.Log($"Picking Up {hit.collider}...");
                    }
                    scrpt.OnPickUp();

                    _heldObject = hit.collider.gameObject;

                    Rigidbody targetRb = _heldObject.GetComponent<Rigidbody>();
                    targetRb.detectCollisions = false;
                    targetRb.useGravity = false;
                    targetRb.isKinematic = true;
                    
                    StartCoroutine(DoPickUp(scrpt.focusOnPickup, scrpt.pickUpAngle));
                }
            }
        }
    }
    /// <summary>
    /// Puts down held object at location player is looking if the player is looking at a flat surface.
    /// </summary>
    private void PutDown(InputAction.CallbackContext args)
    {
        if (_heldObject == null)
        {
            return;
        }
        Rigidbody targetRb = _heldObject.GetComponent<Rigidbody>();
        Pickupable heldObjScrpt = _heldObject.GetComponent<Pickupable>();
        RaycastHit hit;

        if (heldObjScrpt.focusOnPickup)
        {
            heldObjScrpt.ResetObject();
            _mouseLock = false;
        }

        if (Physics.Raycast(_activeCamera.transform.position, _activeCamera.transform.forward, out hit, _pickUpDistance, LayerMask.GetMask("Default"), QueryTriggerInteraction.Ignore) && hit.normal == Vector3.up && hit.transform.CompareTag("PlaceLocation"))
        {
            if (fullDebugging)
            {
                Debug.Log($"Putting down {_heldObject}...");
            }

            targetRb.detectCollisions = true;
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
                _heldObject.transform.position = hit.point + new Vector3(0,_heldObject.GetComponent<Collider>().bounds.extents.y + .1f,0);
            }

            _heldObject.GetComponent<Pickupable>().OnPutDown();

            _crosshair.SetActive(true);
            UnParent(_heldObject);
            _heldObject = null;

        }
    }

    /// <summary>
    /// Creates temporary parent in order to prevent dont destroy on load
    /// </summary>
    /// <param name="obj"></param>
    private void UnParent(GameObject obj)
    {
        GameObject temp = new GameObject("Temp");
        obj.transform.SetParent(temp.transform, true);
        obj.transform.SetParent(null);
        Destroy(temp);
    }

    /// <summary>
    /// Will attempt to call the Interactable script on the object the player is looking at. Passes the heldObject or hand gameobject to the Interactable script on target.
    /// </summary>
    private void Use(InputAction.CallbackContext args)
    {
        RaycastHit hit;
        if (Physics.Raycast(_activeCamera.transform.position, _activeCamera.transform.forward, out hit, _useDistance, LayerMask.GetMask("Interactable", "Drawer", "UI"), QueryTriggerInteraction.Collide))
        {
            if (hit.collider.TryGetComponent<Interactable>(out Interactable script))
            {
                if (script.debugging || fullDebugging)
                {
                    Debug.Log($"Interactable Found!: {hit.collider.gameObject.name}");
                }

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
    private void Teleport(InputAction.CallbackContext args)
    {
        RaycastHit hit;
        if (Physics.Raycast(_activeCamera.transform.position, _activeCamera.transform.forward, out hit, _teleportDistance, LayerMask.GetMask("Teleport"), QueryTriggerInteraction.Collide))
        {
            if (fullDebugging)
            {
                Debug.Log("Teleporting...");
            }

            //_usingObject = false;
            //_putingDownObject = false;
            //_pickUpObject = false;
            transform.position = hit.collider.gameObject.transform.position;
        }
    }

    /// <summary>
    /// Activates DetectLooks script if raycast from activeCamera's position to target position hits object with detect looks script.
    /// 
    /// Script MUST be on a non trigger.
    /// </summary>
    /// <param name="target">position for direction of raycast</param>
    public void LookingAt(Vector3 target)
    {
        RaycastHit hit;

        if (Physics.Raycast(_activeCamera.transform.position, target, out hit, _lookAtDistance, LayerMask.GetMask("Interactable", "Pickupable", "Teleport", "Drawer", "DetectLooks"), QueryTriggerInteraction.Ignore)) // Mabye Change LayerMask to only pickupable/interactable
        {
            if (hit.collider.TryGetComponent<DetectLooks>(out DetectLooks scrpt))
            {
                if (scrpt.debugging)
                {
                    Debug.Log($"Looking At: {hit.collider.gameObject.name}");
                }

                scrpt.PlayerIsLooking();
            }
        }
    }

    /// <summary>
    /// Called by PickUp. Over time will move the target object to the hand location.
    /// </summary>
    /// <param name="focus">If true will focus the object based on focus angle.</param>
    /// <param name="pickUpAngle">Angle that the target object will be focused.</param>
    /// <returns></returns>
    IEnumerator DoPickUp(bool focus, Vector3 pickUpAngle)
    {
        Vector3 heldObjStartLocation = _heldObject.transform.position; // Held Object's Location
        Quaternion heldObjStartRotation; // Held Object's Rotation

        Vector3 targetLocation; // End Target's Location
        Quaternion targetRotation; // End Target's Rotation
        float pickUpTime; // Time is takes to pick up object

        // Setup Targets & Variables
        if (focus) // "Clipboard"
        {
            _mouseLock = true;
            _crosshair.SetActive(false);

            _heldObject.transform.SetParent(null);

            heldObjStartRotation = _heldObject.transform.rotation;
            targetLocation = (_activeCamera.transform.forward * .5f + _activeCamera.transform.position);
            targetRotation = Quaternion.Euler(_activeCamera.transform.rotation.eulerAngles + pickUpAngle);
            pickUpTime = _focusSpeed;
        }
        else // "Everything else"
        {
            _heldObject.transform.SetParent(_handLocation.transform);
            heldObjStartRotation = _heldObject.transform.localRotation;
            targetLocation = _handLocation.transform.position;
            targetRotation = Quaternion.Euler(_handLocation.transform.localRotation.eulerAngles + pickUpAngle);
            pickUpTime = _pickUpTime;
        }

        _grabbingActive = true;

        float time = Time.time; // Timestamp for start of pickup

        if (fullDebugging)
        {
            Debug.Log("Pickup Anim Starting...");
        }

        // Pick up animation loop
        while (_grabbingActive)
        {
            if ( _heldObject == null)
            {
                _grabbingActive = false;
                break;
            }
           
            if (!focus) // "Camera can move"
            {
                targetLocation = _handLocation.transform.position; // Update Target's Current Location
                targetRotation = Quaternion.Euler(_handLocation.transform.localRotation.eulerAngles + pickUpAngle); ; // Update Target's Current Rotation
            }

            float perc1 = Mathf.Clamp(Time.time - time, 0, pickUpTime) / pickUpTime; // 0 -> 1 in "pickUpTime" seconds
            float percent = Mathf.Clamp((Mathf.Sin((Mathf.PI / 6.0f + perc1 * Mathf.PI / 3.0f)) - 0.5f) * 2.0f, 0, 1); // 0 -> 1 based on sin wave for smoother anim
   
            _heldObject.transform.position = Vector3.Lerp(heldObjStartLocation, targetLocation, percent); // Lerp Positions
            _heldObject.transform.localRotation = Quaternion.Lerp(heldObjStartRotation, targetRotation, percent); // Lerp Rotations

            if (percent == 1) // Done Lerping
            {
                _heldObject.transform.position = targetLocation;
                _heldObject.transform.localRotation = targetRotation;
                _grabbingActive = false;
            }
            yield return _EOF;
        }

        if (fullDebugging)
        {
            Debug.Log("Pickup Anim Over...");
        }
    }

    // Returns the object that is currently being grabbed (in 3D) or null if object has already reached hand or not holding an object at all
    public GameObject getGrabbingObject()
    {
        if (!_grabbingActive) return null; // return null if not currently grabbing an object

        return _heldObject; // if currently grabbing an object return that object
    }

   /// <summary>
   /// Used to freeze and unfreeze camera rotation from mouse
   /// </summary>
   /// <param name="b">true: mouse frozen; false: mouse unfrozen</param>
    public void lockMouse(bool b)
    {
        _mouseLock = b;
    }

    /// <summary>
    /// Controls camera movement based on mouse
    /// </summary>
    /// <param name="args"></param>
    public void MouseLook(InputAction.CallbackContext args)
    {
        if (_mouseLock)
        {
            return;
        }
        Vector2 mouseLook = args.ReadValue<Vector2>();
        _deltaYRotation += mouseLook.x * _mouseSensitivity;
        _deltaXRotation -= mouseLook.y * _mouseSensitivity;
        _deltaXRotation = Mathf.Clamp(_deltaXRotation, -90, 90);
        _activeCamera.transform.rotation = Quaternion.Euler(_deltaXRotation, _deltaYRotation, 0f);
    }
}
