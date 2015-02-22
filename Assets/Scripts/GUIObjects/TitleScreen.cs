//
// TitleScreen.cs
//

using UnityEngine;
using System.Collections;

//
// TitleScreen
//
public class TitleScreen : MonoBehaviour
{
	//
	// ViewInstructionsOnClick()
	//
	public void ViewInstructionsOnClick ()
	{
		Application.LoadLevel ("instructions");
	}
	
	
	//
	// PlayGameOnClick()
	//
	public void PlayGameOnClick ()
	{
		GameManager.Instance.CurrentLevel = 1;
		Application.LoadLevel ("game");
	}


	//
	// ViewCreditsOnClick
	//
	public void ViewCreditsOnClick ()
	{
		Application.LoadLevel ("credits");
	}
}
