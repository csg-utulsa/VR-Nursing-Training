using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;
using UnityEngine.UIElements;

public class BehaviorTreeEditor : EditorWindow
{
    BehaviorTreeView treeView;
    InspectorView inspectorView;
    IMGUIContainer blackboardView;

    SerializedObject treeObject;
    SerializedProperty blackboardProperty;

    private bool notExitingPlayMode = false;

    [MenuItem("BehaviorTreeEditor/Editor ...")]
    public static void OpenWindow()
    {
        BehaviorTreeEditor wnd = GetWindow<BehaviorTreeEditor>();
        wnd.titleContent = new GUIContent("BehaviorTreeEditor");
    }

    [MenuItem("BehaviorTreeEditor/Update Node Object Names")]
    public static void UpdateNodeObjNames()
    {
        BehaviorTreeEditor wnd = GetWindow<BehaviorTreeEditor>();
        VisualElement root = wnd.rootVisualElement;
        BehaviorTreeView treeView = root.Q<BehaviorTreeView>();
        treeView.tree.nodes.ForEach(n => n.UpdateNodeObjectName());
    }

    [OnOpenAsset]
    public static bool OnOpenAsset(int instanceID, int line)
    {
        if (Selection.activeObject is BehaviorTree)
        {
            OpenWindow();
            return true;
        }
        return false;
    }

    public void CreateGUI()
    {
        // Each editor window contains a root VisualElement object
        VisualElement root = rootVisualElement;

        string filePath = "Assets/Editor/BehaviorTreeEditor/BehaviorTreeEditor";
        // Import UXML
        var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>($"{filePath}.uxml");
        visualTree.CloneTree(root);

        // A stylesheet can be added to a VisualElement.
        // The style will be applied to the VisualElement and all of its children.
        var styleSheet = AssetDatabase.LoadAssetAtPath<StyleSheet>($"{filePath}.uss");
        root.styleSheets.Add(styleSheet);

        treeView = root.Q<BehaviorTreeView>();
        wantsMouseMove = true;
        inspectorView = root.Q<InspectorView>();
        blackboardView = root.Q<IMGUIContainer>();
        blackboardView.onGUIHandler = () =>
        {
            if(notExitingPlayMode && treeObject != null && treeObject.targetObject != null)
            {
                treeObject.Update();
                EditorGUILayout.PropertyField(blackboardProperty);
                treeObject.ApplyModifiedProperties();
            }
        };

        treeView.OnNodeSelected = OnNodeSelectionChanged;
        OnSelectionChange();
    }

    private void OnEnable()
    {
        EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
        EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
    }

    private void OnDisable()
    {
        EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
    }

    private void OnPlayModeStateChanged(PlayModeStateChange obj)
    {
        switch (obj)
        {
            case PlayModeStateChange.EnteredEditMode:
                notExitingPlayMode = true;
                OnSelectionChange();
                break;
            case PlayModeStateChange.ExitingEditMode:
                break;
            case PlayModeStateChange.EnteredPlayMode:
                OnSelectionChange();
                break;
            case PlayModeStateChange.ExitingPlayMode:
                notExitingPlayMode = false;
                break;
        }
    }

    private void OnSelectionChange()
    {
        BehaviorTree tree = Selection.activeObject as BehaviorTree;
        if(!tree)
        {
            if(Selection.activeGameObject)
            {
                BTRunner runner = Selection.activeGameObject.GetComponent<BTRunner>();
                //AICore core = Selection.activeGameObject.GetComponent<AICore>();
                if(runner)
                {
                    tree = runner.tree;
                }
                //else if(core)
                //{
                //    tree = core.currentTree;
                //}
            }
            else if (Selection.activeObject && Selection.activeObject.GetType() == typeof(UnityEditor.Animations.AnimatorState))
            {
                UnityEditor.Animations.AnimatorState animState = (UnityEditor.Animations.AnimatorState)Selection.activeObject;

                /*
                foreach (StateMachineBehaviour behave in animState.behaviours)
                {
                    if (behave.GetType() == typeof(BaseAIState))
                    {
                        BaseAIState baseAI = (BaseAIState)behave;
                        tree = baseAI.btrees[0];
                    }
                }
                */
            }
        }

        //When Application.isPlaying == true 'treeView' wasnt getting set yet so it was throwing an error
        if (treeView != null)
        {
            if(Application.isPlaying)
            {
                if (tree)
                {
                    treeView.PopulateView(tree);
                }

            }
            else if (tree && AssetDatabase.IsMainAsset(EditorUtility.InstanceIDToObject(tree.GetInstanceID())))
            {
                treeView.PopulateView(tree);
            }
        }

        if(tree != null)
        {
            treeObject = new SerializedObject(tree);
            blackboardProperty = treeObject.FindProperty("blackboard");
        }
    }

    void OnNodeSelectionChanged(NodeView node)
    {
        inspectorView.UpdateSelection(node);
    }

    private void OnInspectorUpdate()
    {
        treeView?.UpdateNodeState();
    }
}