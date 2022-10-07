using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(Collider))]

public class LoadMainScene : Interactable
{


    /*private void OnTriggerEnter(Collider other)
    {
        Interact(other.gameObject);
    }*/

    public override void Interact(GameObject other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            SceneManager.LoadScene("DemoScene");
        }
    }

}
