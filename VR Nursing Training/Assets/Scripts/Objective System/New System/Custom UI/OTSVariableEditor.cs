using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

public class OTSVariableEditor : EditorWindow
{
    [MenuItem("Tools/Objective Tree System/Variables")]
    public static void ShowEditorWindow()
    {
        // This method is called when the user selects the menu item in the Editor
        EditorWindow wnd = GetWindow<OTSVariableEditor>();
        wnd.titleContent = new GUIContent("Objective Tree Variables");
    }

    public void CreateGUI()
    {
        //Find all the variables in the OTS Dictionaries
        var scrollView = new ScrollView();

        //Create Entries for the ints
        var intsList = new DropdownField();
        //var intItem = new field
        scrollView.Add(intsList);
        //Create Entries for the floats
        var floatssList = new ListView();

        //Create Entries for the strings
        var stringsList = new ListView();

        //Create Entries for the bools
        var boolsList = new ListView();

        //Create Entries for the objects
        var objectsList = new ListView();


    }

    private VisualElement GenerateFieldElement<T>(string name, T value)
    {
        var element = new VisualElement();

        var nameField = new TextField();

        return element;
    }
}
