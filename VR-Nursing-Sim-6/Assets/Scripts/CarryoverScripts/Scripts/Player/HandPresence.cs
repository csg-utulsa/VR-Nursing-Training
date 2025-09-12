using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class HandPresence : MonoBehaviour
{
    public bool showController = true;
    public InputDeviceCharacteristics controllerCharacteristics;
    public List<GameObject> controllerPrefabs;
    public GameObject handModelPrefab; 
    public GameObject controllerPrefabFallback;

    
    private InputDevice targetDevice;
    
public GameObject spawnedController;
    private GameObject spawnedHandModel;


    // Start is called before the first frame update
    void Start()
    {
        List<InputDevice> devices = new List<InputDevice>();
        //InputDeviceCharacteristics rightControllerCharacteristics = InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller;
        InputDevices.GetDevicesWithCharacteristics(controllerCharacteristics, devices);
        Debug.Log("VR Device list:");
        foreach( var item in devices)
        {
            Debug.Log(item.name + item.characteristics);
        }
	if(devices.Count == 0){
		devices = new List<InputDevice>();
		InputDeviceCharacteristics genericControllerCharacteristics = InputDeviceCharacteristics.Controller;

		//InputDevices.GetDevices(devices);
		InputDevices.GetDevicesWithCharacteristics(genericControllerCharacteristics,devices);
		Debug.Log("Input device list empty, refreshed: Now has "+devices.Count+" devices.");
	}

        if(devices.Count > 0)
        {
            targetDevice = devices[0];
	    Debug.Log("targetDevice name is "+targetDevice.name);
            GameObject prefab = controllerPrefabs.Find(controller => controller.name == targetDevice.name);
            if (prefab)
            {
		Debug.Log("targetDevice.name = "+targetDevice.name);
                spawnedController = Instantiate(prefab, transform);
            }
            else
            {
                Debug.Log("Did not find a controller model.");
                spawnedController = Instantiate(controllerPrefabs[0], transform);
            }

        } else {
		//No devices found, all hope is lost; Assume we're using an HTC Vive.
		Debug.Log("No devices found for VR Interacting devices, using fallback.");
		GameObject prefab = controllerPrefabFallback;
		spawnedController = Instantiate(prefab,transform);
		//gameObject.transform.eulerAngles = new Vector3(45,0,0); //Angle tweak because our controllers don't line up perfectly without it
		//Above was fixed by modifying the prefab.
	}
        spawnedHandModel = Instantiate(handModelPrefab, transform);
	
    }
    // Update is called once per frame
    void Update()
    {
        if (showController)
        {
            spawnedHandModel.SetActive(false);
            spawnedController.SetActive(true);
        }
        else
        {
            spawnedHandModel.SetActive(true);
            spawnedController.SetActive(false);

        }
    }
}
