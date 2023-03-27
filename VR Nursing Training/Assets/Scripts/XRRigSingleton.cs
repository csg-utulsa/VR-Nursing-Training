using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.Management;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.SceneManagement;
using UnityEngine;

public class XRRigSingleton : MonoBehaviour
{
    public static XRRigSingleton xrs { get; private set; }
    
    /// <summary>
    /// Set true ONLY when a XR Rig is detected
    /// </summary>
    private bool vrActive;
    [Tooltip("VR Root Reference")]
    [SerializeField] private GameObject rootVR;
    [Tooltip("VR Camera Reference")]
    [SerializeField] private Camera camVR;
    [Tooltip("3D Root Reference")]
    [SerializeField] private GameObject root3D;
    [Tooltip("3D Camera Reference")]
    [SerializeField] private Camera cam3D;
    [Tooltip("Right Controller Reference")]
    [SerializeField] private GameObject rightController;
    [Tooltip("Right Teleport Ray Reference")]
    [SerializeField] private GameObject rightTeleportRay;
    [Tooltip("Left Controller Reference")]
    [SerializeField] private GameObject leftController;
    [Tooltip("Left Teleport Ray Reference")]
    [SerializeField] private GameObject leftTeleportRay;

    /// <summary>
    /// Set in setVRActive to either the 3D or VR camera
    /// </summary>
    private Camera activeCamera;

    [Tooltip("Force into VR mode")]
    public bool debugVRActive = false;

    [Tooltip("Force into 3D mode")]
    public bool debug3DActive = false;

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
            setVRActive(true,false);
        }
        else
        {
            Debug.Log("XR NOT Detected");
            setVRActive(false,false);
        }
        #endregion

        // Set new scene listener
        SceneManager.activeSceneChanged += NewScene;

        // Set controller teleport hover events
        var rightRay = rightTeleportRay.GetComponent<XRRayInteractor>();
        rightRay.hoverEntered.AddListener(rightRayActivate);
        rightRay.hoverExited.AddListener(rightRayDeactivate);

        var leftRay = leftTeleportRay.GetComponent<XRRayInteractor>();
        leftRay.hoverEntered.AddListener(leftRayActivate);
        leftRay.hoverExited.AddListener(leftRayDeactivate);
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


    /// <summary>
    /// Returns the VR master gameobject for the VR Camera
    /// </summary>
    /// <returns></returns>
    public GameObject getRootVR() // May not need
    {
        return rootVR;
    }

    /// <summary>
    /// Returns the 3D master gameobject for the 3D camera
    /// </summary>
    /// <returns></returns>
    public GameObject getRoot3D() // May not need
    {
        return root3D;
    }

    /// <summary>
    /// Returns the current active camera in the scene
    /// </summary>
    /// <returns></returns>
    public Camera getActiveCamera()
    {
        return activeCamera;
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
            rootVR.SetActive(vrActive);
            root3D.SetActive(!vrActive);
            activeCamera = active ? camVR : cam3D;

            // Reset Scene
            if (resetScene)
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
            
            return true;
        }
        
    }

    /// <summary>
    /// Listener for XR OnHoverEntered Event
    /// </summary>
    /// <param name="args"></param>
    private void rightRayActivate(HoverEnterEventArgs args = null)
    {
        rightTeleportRay.GetComponent<XRInteractorLineVisual>().enabled = true;
    }

    /// <summary>
    /// Listener for XR OnHoverExit Event
    /// </summary>
    /// <param name="args"></param>
    private void rightRayDeactivate(HoverExitEventArgs args = null)
    {
        rightTeleportRay.GetComponent<XRInteractorLineVisual>().enabled = false;
    }

    /// <summary>
    /// Listener for XR OnHoverEntered Event
    /// </summary>
    /// <param name="args"></param>
    private void leftRayActivate(HoverEnterEventArgs args = null)
    {
        leftTeleportRay.GetComponent<XRInteractorLineVisual>().enabled = true;
    }

    /// <summary>
    /// Listener for XR OnHoverExit Event
    /// </summary>
    /// <param name="args"></param>
    private void leftRayDeactivate(HoverExitEventArgs args = null)
    {
        leftTeleportRay.GetComponent<XRInteractorLineVisual>().enabled = false;
    }
}
