using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtonManager : MonoBehaviour
{
    public GameObject menuPlane;
    public GameObject settingsPlane;
    public GameObject creditsBoard;
    //public GameObject camObjVR;
    //public GameObject camObj3D;
    public GameObject rigVR;
    public GameObject disablePanel;
    public GameObject enablePanel;
    //public static bool VRToggle = false;
    public static XRRigSingleton singleton;
    
    private void Start()
    {
        singleton = XRRigSingleton.xrs;
        //rigVR.GetComponent<characterMovement3D>().interactRayCastDistance = 10; // Changes raycast distance to be able to hit menu
        rigVR.GetComponent<LocomotionController>().toggleRightRayVisible = true;
        disablePanel.SetActive(false);

        //singleton.getVRActive();
    }

   
    // These control the button events
    #region menuButtons 
    public void BeginSimulation()
    {
        // Load Simulation Start Scene
        // Set any needed values before loading
        SceneManager.LoadScene("DemoScene");
    }

    public void BeginTutorial()
    {
        // Load Tutorial Scene
        // Debug.Log("Loading Tutorial");
        SceneManager.LoadScene("Tutorial Scene");
    }

    public void OpenSettings()
    {
        // Open Settings Menu
        menuPlane.SetActive(false);
        settingsPlane.SetActive(true);
    }

    public void BackToMenu()
    {
        // Exit Settings/Credits Menu
        settingsPlane.SetActive(false);
        creditsBoard.SetActive(false);
        menuPlane.SetActive(true);
    }

    public void OpenCredits()
    {
        // Open Credits Menu
        menuPlane.SetActive(false);
        creditsBoard.SetActive(true);
    }

    public void QuitGame() 
    {
        // Save anything we want to first
        Debug.Log("Quitting Application...");
        Application.Quit();
    }
    #endregion

    #region settingButtons

    public void EnableVR()
    {
        Debug.Log("Enable VR");
        // Enable Set VR Active && Swaps panels
        if (singleton.setVRActive(true))
        {
            enablePanel.SetActive(false);
            disablePanel.SetActive(true);
        }
        
     
        

    }

    public void DisableVR()
    {
        Debug.Log("Disable VR");
        // Disable VR Enable 3D && Swaps panels
        singleton.setVRActive(false);
        disablePanel.SetActive(false);
        enablePanel.SetActive(true);
    }
    #endregion
}
