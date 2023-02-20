using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Base class for any object that needs to change when the player hovers over or looks at objects.
//Includes a LookHighlight and CursorHighlight function that is also paired with a same-named function in InteractableBase for UI purposes.

//Primarily for UI purposes that only simply need to know if they're being looked at or clicked on.

//If more advanced interactions are needed, use InteractableBase and more- they know what object is being held and so on.



public interface HoverableBase
{
    public void CursorHighlight(); //Cursor or hand is on/touching the object

    public void LookHighlight(); //Object is near the cursor or the user is looking at the object's general direction

    public void CursorInteract(); //CursorHighlight is running AND the user interacts with it, through a trigger pull or otherwise. Does not honor whatever object is being held
}
