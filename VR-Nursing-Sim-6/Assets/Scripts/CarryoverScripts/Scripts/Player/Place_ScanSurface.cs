using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Place_ScanSurface : MonoBehaviour
{
    //This class scans the surface it's pointing at to see if it's flat.
    public float heightTarget = 0.5f;
    public float spreadAmount = 0.1f;
    public float heightOffset = 0.05f; //Height above the floor to start scanning


    private bool rangerScan(Vector3 pos){
        RaycastHit hit;
        //if(Physics.Raycast(pos, new Vector3(0,-1,0), out hit, heightTarget) == true //Raycast good
        Color color = new Color(1.0f,0.0f,0.0f);
        Debug.DrawLine(pos,pos+ (new Vector3(0,-1,0)*heightTarget),color);
        int layerMask = ~0; //All layers
        if(Physics.Raycast(pos, new Vector3(0,-1,0), out hit, heightTarget,layerMask, QueryTriggerInteraction.Ignore) == true //Raycast good
            && hit.collider.gameObject.layer == 0 //Hit layer 0 (Default layer)
            && hit.normal == new Vector3(0,1,0) //Normal points upward
        ){

            return true;
        }
        //Debug.Log("hit object is layer "+hit.collider.gameObject.layer);
        return false;
    }

    public bool placeOK(){
        // Returns true if four cast rangers hit a surface with similar height.
        Vector3 curpos = transform.position+ new Vector3(0,heightOffset,0);

        Vector3[] positions = new Vector3[4];
        positions[0] = curpos + new Vector3(spreadAmount,0,spreadAmount);
        positions[1] = curpos + new Vector3(-spreadAmount,0,spreadAmount);
        positions[2] = curpos + new Vector3(spreadAmount,0,-spreadAmount);
        positions[3] = curpos + new Vector3(-spreadAmount,0,-spreadAmount);

        for(int i = 0; i < 4; i++){
            if(rangerScan(positions[i]) == false){
                //Debug.Log("Ranger "+i+" not ok");
                return false;
            }
            else{
                //Debug.Log("Ranger "+i+" ok");
            }
        }
        return true;


    }
}
