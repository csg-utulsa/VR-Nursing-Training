using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class PatchSpawnScript : InteractableBase
{
    [SerializeField] private GameObject patchNitro;

    private GameObject patch;
    private string patchType;

    public UnityEvent<string> onSpawn;

    private void OnTriggerEnter(Collider other)
    {
        Interact(other);
    }
    public override void Interact(Collider other)
    {
        if (other.CompareTag("PatchContainer"))
        {
            patchType = other.gameObject.GetComponent<InteractableScript>().getType();
            if (patchType == "NITROGLYCERIN")
            {
                patch = Instantiate(patchNitro, transform.position + new Vector3(0, 1, 0), transform.rotation);
                onSpawn.Invoke(patchType);
            }
        }
    }
}
