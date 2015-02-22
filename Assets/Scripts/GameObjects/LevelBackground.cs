//
// LevelBackground.cs
//

using UnityEngine;
using System.Collections;

//
// LevelBackground
//
public class LevelBackground : MonoBehaviour
{
	public MeshRenderer meshRenderer;
	public int buildingID;

	//
	// Start()
	//
	void Start ()
	{
		if (buildingID == GameManager.Instance.CurrentLevel)
		{
			meshRenderer.enabled = true;
		}
		else //
		{
			meshRenderer.enabled = false;
		}
	}
}