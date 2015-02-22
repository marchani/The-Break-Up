//
// SummaryScreen.cs
//

using UnityEngine;
using System.Collections;

//
// SummaryScreen
//
public class SummaryScreen : MonoBehaviour
{	
	//var character : Player;
	public UnityEngine.UI.Text summaryText;
	public UnityEngine.UI.Button playNextLevelButton;
	public UnityEngine.UI.Button viewCreditsButton;

	//
	// Start()
	//
	void Start ()
	{
		int numSteinsDropped = GameManager.Instance.NumSteinsCaught + GameManager.Instance.NumSteinsBroken;
		float percentSteinsCaught = ( (float)GameManager.Instance.NumSteinsCaught / numSteinsDropped) * 100;

		summaryText.text = "Level " + GameManager.Instance.CurrentLevel + " completed\n\n";
		summaryText.text += "You saved " + GameManager.Instance.NumSteinsCaught.ToString() + " steins from your precious collection!\n\n";
		summaryText.text += "Saved " + GameManager.Instance.NumSteinsCaught.ToString() + " out of " + numSteinsDropped.ToString();
		summaryText.text += " (" + percentSteinsCaught.ToString("F0") + "%)\n\n";

		if (GameManager.Instance.CurrentLevel == 5)
		{
			summaryText.text += "A couple of months pass before you start dating another girl,\n";
			summaryText.text += "and just a few weeks later... not this time!\n\n";
			summaryText.text += "Way to go grow up, buddy.";
			
			viewCreditsButton.gameObject.SetActive (true);
		}
		else
		{
			summaryText.text += "A couple of months pass before you start dating another girl,\n";
			summaryText.text += "and just a few weeks later... another bad break up!\n\n";
			summaryText.text += "Time to save your steins again...";

			playNextLevelButton.gameObject.SetActive (true);
		}
	}


	//
	// playNextLevelButtonOnClick()
	//
	public void playNextLevelButtonOnClick ()
	{
		GameManager.Instance.CurrentLevel++;
		Application.LoadLevel ("game");
	}


	//
	// viewCreditsOnClick()
	//
	public void viewCreditsOnClick ()
	{
		Application.LoadLevel ("credits");
	}
}
