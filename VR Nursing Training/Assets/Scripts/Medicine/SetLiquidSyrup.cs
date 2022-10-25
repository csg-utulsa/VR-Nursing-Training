using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetLiquidSyrup : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Invoke("SetParentSyrup", 1);
    }

    private void SetParentSyrup()
    {
        //gameObject.transform.parent.GetComponent<MedicineData>().set;
        //gameObject.transform.parent.GetComponent<LiquidObjectScript>().setDosage(20);
    }
}
