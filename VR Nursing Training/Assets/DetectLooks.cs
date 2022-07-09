using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(Collider))]
public class DetectLooks : MonoBehaviour
{
    public UnityEvent lookStarted;
    public UnityEvent lookStopped;
    public float lookTime = .5f;
    private bool looked = false;
    private WaitForSeconds wait;
    private void Awake()
    {
        wait = new WaitForSeconds(lookTime);
    }
    public void PlayerIsLooking()
    {
        if (looked) // Reset Cooldown
        {
            StopAllCoroutines(); 
            StartCoroutine(Cooldown());
        } 
        else
        {
            lookStarted.Invoke();
            looked = true;
        }
    }
       
        
    IEnumerator Cooldown()
    {
        yield return wait;
        looked = false;
        PlayerStoppedLooking();
    }

    public void PlayerStoppedLooking() // NOT IMPLEMENTED
    {
        lookStopped.Invoke();
        Debug.Log("Stopped Looking...");
    }
}
