using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PillSpawnScript : MonoBehaviour
{
    public GameObject pill;
    private void OnTriggerEnter(Collider other)
    {
        

        if (other.CompareTag("PillContainer"))
        {
            Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
            Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
            Instantiate(pill, transform.position + new Vector3(0, 1, 0), transform.rotation);
        }
    }
}
