using UnityEngine;
using UTulsa.VRNS.BaseScripts;
using UnityEngine.InputSystem;
using NUnit.Framework.Constraints;
//// Looks as if this script may be unnecesarry, but will be kept just in case
namespace UTulsa.VRNS.Managers
{
    public class InputManager : Singleton<InputManager> //The basic idea behind this script is to manage all of the player's inputs, regardless of input method
    {
        [SerializeField]
        private InputActionAsset playerInput;

        private void Awake()
        {
            base.Awake();
            //The very first thing this method does is determine which control method we use
            if (true)
            {
                //This will be for Desktop mode, which we have to use right now
                //playerInput.Enable(); //Later we need to make sure it only activates the correct ActionMap based on input device
            }
            else
            {
                return; //This will be for VR mode
            }
        }

        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}