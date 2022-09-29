using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.Management;
using UnityEngine;

public class XRRigSingleton : MonoBehaviour
{
    public static XRRigSingleton xrs { get; private set; }
    /// <summary>
    /// Set true ONLY when a XR Rig is detected
    /// </summary>
    private bool vrActive;
    [Tooltip("VR Camera Reference")]
    [SerializeField] private GameObject rootVR;
    [Tooltip("3D Camera Reference")]
    [SerializeField] private GameObject root3D;
    private void Awake()
    {
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
        }
        if (XRGeneralSettings.Instance.Manager.activeLoader != null)
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

    public GameObject getRootVR()
    {
        return rootVR;
    }

    public GameObject getRoot3D()
    {
        return root3D;
    }
    public bool getVRActive()
    {
        return vrActive;
    }

    /// <summary>
    /// Sets public bool setVRActive to parameter and enables/disables cameras based on bool
    /// </summary>
    /// <param name="active"></param>
    public void setVRActive(bool active)
    {
        vrActive = active;
        rootVR.SetActive(vrActive);
        root3D.SetActive(!vrActive);
    }

}
