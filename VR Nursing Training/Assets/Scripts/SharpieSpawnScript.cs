using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SharpieSpawnScript : MonoBehaviour
{
    [SerializeField] private GameObject sharpie;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Patch"))
        {
            sharpie.SetActive(true);
        }
    }
}
