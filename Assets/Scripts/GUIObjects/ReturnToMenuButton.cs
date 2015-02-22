//
// ReturnToMenuButton.cs
//

using UnityEngine;
using System.Collections;

//
// ReturnToMenuButton
//
public class ReturnToMenuButton : MonoBehaviour
{
	public UnityEngine.UI.Button button;
	public UnityEngine.UI.Image buttonImage;
	public UnityEngine.UI.Text buttonText;
	
	//
	// Start()
	//
	void Start ()
	{
		GameManager.Notifications.AddListener (this, "GameOver");
		buttonImage.enabled = false;
		buttonText.enabled = false;
		
		button.onClick.AddListener (GameManager.Instance.ReturnToMenuOnClick);
	}
	
	
	//
	// GameOver()
	//
	public void GameOver ()
	{
		buttonImage.enabled = true;
		buttonText.enabled = true;
	}
}