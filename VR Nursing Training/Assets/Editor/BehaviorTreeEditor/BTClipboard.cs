using System;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// ClipboardEntry is used to store the data needed to recreate a single node from the behavior tree.
/// </summary>
[System.Serializable]
public class ClipboardEntry
{
    public string nodeName { get; private set; }
    public Type nodeType { get; private set; }
    public NodeBase oldNode { get; private set; }
    public Dictionary<string, object> valueDict { get; private set; }

    public ClipboardEntry(string name, Type type, NodeBase on)
    {
        nodeName = name;
        nodeType = type;
        oldNode = on;
        valueDict = new Dictionary<string,object>();
    }

    public void AddField(string fieldName, object fieldValue)
    {
        valueDict.Add(fieldName, fieldValue);
    }

    public void RemoveKeyAndValues(string key)
    {
        valueDict.Remove(key);
    }
}

/// <summary>
/// BTClipboard will hold a list of ClipboardEntrys and functions to parse the entries to help generate new nodes when copying and pasting.
/// </summary>
public class BTClipboard
{
    List<ClipboardEntry> Entries = new List<ClipboardEntry>();

    /// <summary>This will be set when ctr + C or X is pressed. Used to calculate the offset when pasting.</summary>
    Vector2 mousePosAtCopy = Vector2.zero;
    /// <summary>The offset that will be applied to every nodes position value to allow for pasting where the mouse is, instead of right ontop of the nodes that were copied.</summary>
    Vector2 offset = Vector2.zero;

    public void SetMousePosAtCopy(Vector2 pos)
    {
        mousePosAtCopy = pos;
    }
    
    public void SetMouseCopyPasteOffset(Vector2 pos)
    {
        offset = pos - mousePosAtCopy;
    }

    public void AddEntry(ClipboardEntry entry)
    {
        Entries.Add(entry);
    }

    public List<ClipboardEntry> GetEntries()
    {
        return Entries;
    }

    public Vector2 GetOffset()
    {
        return offset;
    }
}
