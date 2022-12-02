using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.Management;
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
    [Tooltip("RightController Reference")]
    [SerializeField] private GameObject rightController;
    [Tooltip("LeftController Reference")]
    [SerializeField] private GameObject leftController;
    /// <summary>
    /// Set in setVRActive to either the 3D or VR camera
    /// </summary>
    private Camera activeCamera;
    public bool debugVRActive = false;
    public bool debug3DActive = false;

    /// <summary>
    /// Creates singleton/destroys if already exists, Sets starting camera
    /// </summary>
    private void Awake()
    {
        SceneManager.activeSceneChanged += NewScene;
        #region Singleton
        if (xrs == null)
        {
            xrs = this;
            DontDestroyOnLoad(this);
        } else if (xrs != this)
        {
            Debug.Log("DESTROYING DUPLICATE");
            xrs.transform.position = this.transform.position;
            Destroy(gameObject);
            return;
        }
        if ((XRGeneralSettings.Instance.Manager.activeLoader != null || debugVRActive) && !debug3DActive)
        {
            Debug.Log("XR Detected..");
            setVRActive(true);
        }
        else
        {
            Debug.Log("XR NOT Detected");
            setVRActive(false);
        }
        #endregion
    }

    private void NewScene(Scene prev, Scene next)
    {
        var a = GetComponent<LocomotionController>();
        a.toggleRightRayVisible = false;
        a.toggleLeftRayVisible = false;
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
    public bool setVRActive(bool active)
    {
        if (active && XRGeneralSettings.Instance.Manager.activeLoader == null && !debugVRActive)
        {
            Debug.LogError("Attempted to enable VR, but failed to detect XR Device");
            return false;
        } else
        {
            vrActive = active;
            rootVR.SetActive(vrActive);
            root3D.SetActive(!vrActive);
            activeCamera = active ? camVR : cam3D;
            return true;
        }
        
    }

}
