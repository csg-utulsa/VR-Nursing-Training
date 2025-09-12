using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnParentOnEnable : MonoBehaviour
{
    private void OnEnable()
    {
        gameObject.transform.SetParent(null);
    }
}
