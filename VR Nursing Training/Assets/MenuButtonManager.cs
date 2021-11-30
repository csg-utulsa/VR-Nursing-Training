using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtonManager : MonoBehaviour
{
    public GameObject menuPlane;
    public GameObject settingsPlane;
    public GameObject creditsBoard;
    public GameObject camObjVR;
    public GameObject camObj3D;
    public Camera cam3D;
    public GameObject rigVR;


    



    private void Start()
    {
        rigVR.GetComponent<characterMovement3D>().interactRayCastDistance = 10; // Changes raycast distance to be able to hit menu
    }

    private void Update()
    {
        MenuRayCast();
    }

    public void MenuRayCast()
    {
        RaycastHit hit;
        hit
        if (Physics.Raycast(camera3D.transform.position, camera3D.transform.forward, out hit, 2))
        {

        }
    }

    // These control the button events
    #region menuButtons 
    public void BeginSimulation()
    {
        // Load Simulation Start Scene
        // Set any needed values before loading
        SceneManager.LoadScene("DemoScene");
        camObj3D.GetComponent<characterMovement3D>().interactRayCastDistance = 2;
    }

    public void BeginTutorial()
    {
        // Load Tutorial Scene
        Debug.Log("Loading Tutorial");
        // SceneManager.LoadScene("TutorialScene"); (Not Implemented Yet)
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
        // Enable VR Camera Disable 3D
        camObj3D.SetActive(false);
        camObjVR.SetActive(true);

    }

    public void DisableVR()
    {
        // Disable VR Enable 3D 
        camObjVR.SetActive(false);
        camObj3D.SetActive(true);
    }

    #endregion
}
