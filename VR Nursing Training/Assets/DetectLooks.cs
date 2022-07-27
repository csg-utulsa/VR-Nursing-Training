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
    public bool debugging = false;
    private bool looked = false;
    private WaitForSeconds wait;
    private void Awake()
    {
        wait = new WaitForSeconds(lookTime);
        if (GetComponent<Collider>().isTrigger)
        {
            Debug.Log($"Not Detecting Looks On {name} Collider Cannot Be Trigger!");
        }
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
            if(debugging)
            {
                Debug.Log($"Invoking Look Started Event: {name}");
            }

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

    public void PlayerStoppedLooking()
    {
        if (debugging)
        {
            Debug.Log($"Invoking Look Stopped Event: {name}");
        }
        lookStopped.Invoke();
    }
}
