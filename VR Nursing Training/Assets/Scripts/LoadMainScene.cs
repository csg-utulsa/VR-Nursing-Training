using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(Collider))]

public class LoadMainScene : InteractableBase
{


    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            SceneManager.LoadScene("DemoScene");
        }
    }

}
