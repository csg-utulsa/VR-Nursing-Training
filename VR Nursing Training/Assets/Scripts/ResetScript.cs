using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetScript : MonoBehaviour
{
    public GameObject hammer;


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == hammer)
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }

}
