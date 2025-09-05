// Generic Singleton base class that any MonoBehaviour can inherit from
using UnityEngine;

namespace UTulsa.VRNS.BaseScripts
{

    public class Singleton<T> : MonoBehaviour where T : MonoBehaviour
    {
        // Static instance that holds the reference to the Singleton
        private static T _instance;

        // Public property to access the Singleton instance
        public static T Instance
        {
            get
            {
                return _instance;
            }
        }

        //Variable for persistence
        [SerializeField]
        private bool _isPersistant = true;


        // Unity's Awake method, called when the script instance is being loaded
        protected void Awake()
        {
            // Check for singleton duplication
            CheckForSingleton();

        }//end Awake()

        // Ensures that only one instance of the Singleton exists
        void CheckForSingleton()
        {
            // If no instance exists, assign this instance
            if (_instance == null)
            {
                _instance = this as T;

                //Check if Singleton is persistent
                CheckForPersistance();
            }

            // If an instance already exists and it's not this one 
            else if (_instance != this)
            {
                //Destroy the new instance to maintain the Singleton
                Destroy(_instance);

            }//end if (_instance == null)

            // Log the current instance for debugging purposes
            Debug.Log(_instance);

        }//end CheckForSingleton()

        void CheckForPersistance()
        {
            // Check if persistence is required
            if (_isPersistant)
            {
                // Detach from parent if there is one
                if (transform.parent != null)
                {
                    transform.SetParent(null);
                }

                // Mark this GameObject as not to be destroyed
                DontDestroyOnLoad(gameObject);

            }//end CheckForPersitance()

        }
    }//end Singelton
}

