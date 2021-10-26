using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetScript : InteractableBase
{


    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }

    public override void Interact(Collider other)
    {
        if (other.gameObject.CompareTag("Hands"))
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }

}
