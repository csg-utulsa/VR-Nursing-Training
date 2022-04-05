using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimManagement : MonoBehaviour
{

    //Global simulation management, universal to all sims

    // VR Up-Close Menu Cursor enable/disable
    public GameObject[] VRCursorAssemblies;
    private bool VRCursorsActive = false;
    public bool getVRCursorsActiveState()
    {
        return VRCursorsActive;
    }
    public void setVRCursorsActiveState(bool activeState)
    {
        VRCursorsActive = activeState;
        foreach(GameObject go in VRCursorAssemblies)
        {
            go.SetActive(activeState);
        }
    }






    #region Manager Singleton
    static public SimManagement SM; //refence GameManager

    //Check to make sure only one instance of the GameManager is in the scene
    void CheckSMIsInScene()
    {

        //Check if instance is null
        if (SM == null)
        {
            SM = this; 
        }
        else 
        {
            Debug.LogError("Multiple managers instantiated. One is being ignored. Something is wrong!");
        }
    }//end CheckGameManagerIsInScene()
    #endregion



    // Start is called before the first frame update
    void Start()
    {
        CheckSMIsInScene();
    }

    // Update is called once per frame
    void Update()
    {
        //nothing
    }
}
