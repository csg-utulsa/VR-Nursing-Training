using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// from https://answers.unity.com/questions/1499405/find-all-objects-inside-box-collider.html

// this class keeps count of how many items are in the trigger

public class TriggerTally : MonoBehaviour
{
   private HashSet<Collider> colliders = new HashSet<Collider>();

      public HashSet<Collider> GetColliders () { return colliders; }

      public int collidersCount(){
          return colliders.Count;
      }

      private void OnTriggerEnter (Collider other) {
          colliders.Add(other); //hashset automatically handles duplicates
      }

      private void OnTriggerExit (Collider other) {
          colliders.Remove(other);
      }
}
