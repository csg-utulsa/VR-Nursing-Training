using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.Management;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.SceneManagement;
using UnityEngine.InputSystem;
using UnityEngine;
using UnityEngine.InputSystem.XR;

[RequireComponent(typeof(PlayerInput))]
public class XRRigSingleton : MonoBehaviour
{
    public static XRRigSingleton xrs { get; private set; }
    
    /// <summary>
    /// Set true ONLY when a XR Rig is detected
    /// </summary>
    private bool vrActive;
    //[Tooltip("VR Root Reference")]
    //[SerializeField] private GameObject rootVR;
    [Tooltip("Camera Reference")]
    [SerializeField] private Camera cam;
    //[Tooltip("VR Camera Reference")]
    //[SerializeField] private Camera camVR;
    //[Tooltip("3D Root Reference")]
    //[SerializeField] private GameObject root3D;
    //[Tooltip("3D Camera Reference")]
    //[SerializeField] private Camera cam3D;
    [Tooltip("Right Controller Reference")]
    [SerializeField] private GameObject rightController;
    //[Tooltip("Right Teleport Ray Reference")]
    //[SerializeField] private GameObject rightTeleportRay;
    [Tooltip("Left Controller Reference")]
    [SerializeField] private GameObject leftController;

    [Tooltip("Mouse Controller Reference")]
    [SerializeField] private GameObject mouseController;
    //[Tooltip("Left Teleport Ray Reference")]
    //[SerializeField] private GameObject leftTeleportRay;

    
    private PlayerInput _playerInput;

    private InputAction _mouseLookAction;

    private InputAction _keyboardMoveAction;

    [Tooltip("Force into VR mode")]
    public bool debugVRActive = false;

    [Tooltip("Force into 3D mode")]
    public bool debug3DActive = false;

    private Rigidbody _playerRB;
   

    /// <summary>
    /// Creates singleton/destroys if already exists, Sets starting camera
    /// </summary>
    private void Awake()
    {
        #region Singleton
        if (xrs == null)
        {
            xrs = this;
            DontDestroyOnLoad(this);
        } 
        else if (xrs != this)
        {
            Debug.Log("DESTROYING DUPLICATE");
            xrs.transform.position = this.transform.position;
            Destroy(gameObject);
            return;
        }

        if ((XRGeneralSettings.Instance.Manager.activeLoader != null || debugVRActive) && !debug3DActive)
        {
            Debug.Log("XR Detected..");
            //setVRActive(true,false);
        }
        else
        {
            Debug.Log("XR NOT Detected");
            //setVRActive(false,false);
        }
        #endregion

        // Set new scene listener
        SceneManager.activeSceneChanged += NewScene;

        // Set controller teleport hover events
        //var rightRay = rightTeleportRay.GetComponent<XRRayInteractor>();
        var rightRay = rightController.GetComponent<XRRayInteractor>();
        rightRay.hoverEntered.AddListener(rightRayActivate);
        rightRay.hoverExited.AddListener(rightRayDeactivate);

        //var leftRay = leftTeleportRay.GetComponent<XRRayInteractor>();
        var leftRay = leftController.GetComponent<XRRayInteractor>();
        leftRay.hoverEntered.AddListener(leftRayActivate);
        leftRay.hoverExited.AddListener(leftRayDeactivate);

        var mouseRay = mouseController.GetComponent<XRRayInteractor>();
        mouseRay.hoverEntered.AddListener(mouseRayActivate);
        mouseRay.hoverExited.AddListener(mouseRayDeactivate);

        _playerRB = GetComponent<Rigidbody>();

        _playerInput = GetComponent<PlayerInput>();
        foreach(InputAction action in _playerInput.actions)
        {
            action.Enable();
        }
        _playerInput.onControlsChanged += OnControlsChanged;
        _mouseLookAction = _playerInput.actions.FindAction("MouseLook");
        //_keyboardMoveAction = _playerInput.actions.FindAction("KeyboardMovement");
     
    }

    private void OnDisable()
    {
        if (xrs == this)
        {
            _playerInput.actions = null;
        }
    }

    /// <summary>
    /// Called when a new scene is loaded
    /// </summary>
    /// <param name="prev"></param>
    /// <param name="next"></param>
    private void NewScene(Scene prev, Scene next)
    {
        // Deactivate Controller Rays
        rightRayDeactivate();
        leftRayDeactivate();
    }

    private void OnControlsChanged(PlayerInput input)
    {
        Debug.Log("Controls changed to: " + input.currentControlScheme);
        Cursor.lockState = CursorLockMode.None;
        if (input.currentControlScheme == "XRFullBody" || debugVRActive)
        {
            
            setVRActive(true, false);
        } 
        else if (input.currentControlScheme == "Mouse&Keyboard" || debug3DActive)
        {
            Cursor.lockState = CursorLockMode.Locked;
            setVRActive(false, false);
        }
    }

    /// <summary>
    /// Returns the current active camera in the scene
    /// </summary>
    /// <returns></returns>
    public Camera getActiveCamera()
    {
        //return activeCamera;
        return cam;
    }

    /// <summary>
    /// Returns true if the VR Camera is active
    /// </summary>
    /// <returns></returns>
    public bool getVRActive()
    {
        return vrActive;
    }

    /// <summary>
    /// Sets public bool setVRActive to parameter and enables/disables cameras based on bool
    /// </summary>
    /// <param name="active"></param>
    public bool setVRActive(bool active, bool resetScene = true)
    {
        if (active && XRGeneralSettings.Instance.Manager.activeLoader == null && !debugVRActive)
        {
            Debug.LogError("Attempted to enable VR, but failed to detect XR Device");
            return false;
        } 
        else
        {
            // Toggle Active Camera/Controls
            vrActive = active;

            SetVrInputsActive(vrActive);
            
            //rootVR.SetActive(vrActive);
            //root3D.SetActive(!vrActive);
            //activeCamera = active ? camVR : cam3D;

            // Reset Scene
            if (resetScene)
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
            
            return true;
        }
        
    }

    private bool SetVrInputsActive(bool active)
    {
        if (active)
        {
            Debug.Log("Disabling Mouse Controls...");
            DisableKeyboardInputs();
            Debug.Log("Enabling VR Controls...");
            EnableVRInputs();
        } 
        else
        {
            Debug.Log("Disabling VR Controls...");
            DisableVRInputs();
            Debug.Log("Enabling Mouse Controls...");
            EnableKeyboardInputs();
        }

        return true;
    }

    private bool EnableKeyboardInputs()
    {
        cam.GetComponent<TrackedPoseDriver>().enabled = false;
        _mouseLookAction.performed += MouseLook;
        //_keyboardMoveAction.performed += KeyboardMovement;
        mouseController.SetActive(true);
        return true;
    }
    private bool DisableKeyboardInputs()
    {
        cam.GetComponent<TrackedPoseDriver>().enabled = true;
        _mouseLookAction.performed -= MouseLook;
        //_keyboardMoveAction.performed -= KeyboardMovement;
        mouseController.SetActive(false);
        return true;
    }
    private bool EnableVRInputs()
    {
        leftController.SetActive(true);
        rightController.SetActive(true);
        return true;
    }
    private bool DisableVRInputs()
    {
        leftController.SetActive(false);
        rightController.SetActive(false);
        return true;
    }

    /// <summary>
    /// Listener for XR OnHoverEntered Event
    /// </summary>
    /// <param name="args"></param>
    private void rightRayActivate(HoverEnterEventArgs args = null)
    {
        /*rightTeleportRay.GetComponent<XRInteractorLineVisual>().enabled = true;*/
        rightController.GetComponent<XRInteractorLineVisual>().enabled = true;
    }

    /// <summary>
    /// Listener for XR OnHoverExit Event
    /// </summary>
    /// <param name="args"></param>
    private void rightRayDeactivate(HoverExitEventArgs args = null)
    {
        /*rightTeleportRay.GetComponent<XRInteractorLineVisual>().enabled = false;*/
        rightController.GetComponent<XRInteractorLineVisual>().enabled = false;
    }

    /// <summary>
    /// Listener for XR OnHoverEntered Event
    /// </summary>
    /// <param name="args"></param>
    private void leftRayActivate(HoverEnterEventArgs args = null)
    {
        /*leftTeleportRay.GetComponent<XRInteractorLineVisual>().enabled = true;*/
        leftController.GetComponent<XRInteractorLineVisual>().enabled = true;
    }

    /// <summary>
    /// Listener for XR OnHoverExit Event
    /// </summary>
    /// <param name="args"></param>
    private void leftRayDeactivate(HoverExitEventArgs args = null)
    {
        /*leftTeleportRay.GetComponent<XRInteractorLineVisual>().enabled = false;*/
        leftController.GetComponent<XRInteractorLineVisual>().enabled = false;
    }

    /// <summary>
    /// Listener for XR OnHoverEntered Event
    /// </summary>
    /// <param name="args"></param>
    private void mouseRayActivate(HoverEnterEventArgs args = null)
    {
        //mouseController.GetComponent<XRInteractorLineVisual>().enabled = true;
    }

    /// <summary>
    /// Listener for XR OnHoverExit Event
    /// </summary>
    /// <param name="args"></param>
    private void mouseRayDeactivate(HoverExitEventArgs args = null)
    {
        //mouseController.GetComponent<XRInteractorLineVisual>().enabled = false;
    }

    /// <summary>
    /// Tracks left and right rotation from mouse
    /// </summary>
    private float _deltaYRotation = 0f;

    /// <summary>
    /// Tracks up and down rotation from mouse
    /// </summary>
    private float _deltaXRotation = 0f;
    [Tooltip("Mouse sensitivity"), SerializeField]
    private float _mouseSensitivity = .1f;
   

    /// <summary>
    /// Controls camera movement based on mouse
    /// </summary>
    /// <param name="args"></param>
    private void MouseLook(InputAction.CallbackContext args)
    {
       
        if (vrActive)
        {
            return;
        }
        Vector2 mouseLook = args.ReadValue<Vector2>();
        _deltaYRotation += mouseLook.x * _mouseSensitivity;
        _deltaXRotation -= mouseLook.y * _mouseSensitivity;
        _deltaXRotation = Mathf.Clamp(_deltaXRotation, -90, 90);
        cam.transform.rotation = Quaternion.Euler(_deltaXRotation, _deltaYRotation, 0f);
    }
    /*
    Vector3 moveDir = Vector3.zero;
    Vector2 movement = Vector2.zero;
    private void KeyboardMovement(InputAction.CallbackContext args)
    {
        Debug.Log("Moving:");
        movement = args.ReadValue<Vector2>();
       
        
    }
    
    private void FixedUpdate()
    {
        //Vector3 camT = new Vector3(0, cam.transform.rotation.y, cam.transform.rotation.z)
        moveDir = cam.transform.forward * movement.y + cam.transform.right * movement.x;
        moveDir.y = 0;
        _playerRB.AddForce(moveDir.normalized * 10f, ForceMode.Force);
    }*/
    
    public void test()
    {
        Debug.Log("TEST");
    }

    public void hover()
    {
        Debug.Log("Hover");
    }

    public void select()
    {
        Debug.Log("Select");
    }

    public void activate()
    {
        Debug.Log("Activate");
    }
}
