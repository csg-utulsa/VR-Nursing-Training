using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.InteractionSubsystems;

public class PickUpScript : MonoBehaviour
{
    // Referenced Youtube Video: "How to GRAB RIGIDBODIES in VR! (Tutorial - UnityC# SteamVR)" by Master Indie
    

    /* 
     * 1. Create GameObject you want to be picked up
     * 2. Set layer to "Interactables" (Create if it doesn't exist)
     * 3. Hover hand next to GameObject and press and hold grab key
     */ 

    public LayerMask pickupLayer; 
    public GameObject hand;
    public float pickUpDist = .3f;

    bool isGrabbing = false;
    Rigidbody target;

    private void FixedUpdate()
    {
        
        if (Input.GetKeyDown("space")) // Detect if they are pressing the grab button [REPLACE "Input.GetKeyDown("space") WITH CONTROLLER KEY DETECTION]
        {
            isGrabbing = true;
        }  // end if
        else // if Grab button not being pressed
        {
            isGrabbing = false;
        } // end else

        
        if (!isGrabbing) { // if user is not currently holding down grab button

            Collider[] colliders = Physics.OverlapSphere(transform.position, pickUpDist, pickupLayer);
            if (colliders.Length > 0)
            {
                target = colliders[0].transform.root.GetComponent<Rigidbody>();
            }
            else
            {
                target = null;
            }

        } // end if(!Grabbing)
        else // If user has grab button held down
        {
            if (target) // if target exists
            {
                target.velocity = (transform.position - target.transform.position) / Time.fixedDeltaTime;

                target.maxAngularVelocity = 20;
                Quaternion deltaRot = transform.rotation * Quaternion.Inverse(target.transform.rotation);
                Vector3 eulerRot = new Vector3(Mathf.DeltaAngle(0, deltaRot.eulerAngles.x), Mathf.DeltaAngle(0, deltaRot.eulerAngles.y), Mathf.DeltaAngle(0, deltaRot.eulerAngles.z));
                eulerRot *= .95f;
                eulerRot *= Mathf.Deg2Rad;
                target.angularVelocity = eulerRot / Time.fixedDeltaTime;


            } // end if (target)
        } // end else

    } // end Fixed Update
}
