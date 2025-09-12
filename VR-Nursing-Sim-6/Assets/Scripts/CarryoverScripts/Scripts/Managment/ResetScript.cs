using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetScript : Interactable
{
    public override void Interact(GameObject other)
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
