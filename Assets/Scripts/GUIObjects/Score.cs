//
// Score.cs
//

using UnityEngine;
using System.Collections;

//
// Score
//
public class Score : MonoBehaviour
{
	public UnityEngine.UI.Text score;

	//
	// Start()
	//
	void Start ()
	{
		score.text = "0";
		GameManager.Notifications.AddListener (this, "NumSteinsCaughtUpdated");
		GameManager.Notifications.AddListener (this, "GameOver");

	}


	//
	// NumSteinsCaughtUpdated()
	//
	public void NumSteinsCaughtUpdated ()
	{
		if (GameManager.Instance.GameOver == false)
		{
			score.text = GameManager.Instance.NumSteinsCaught.ToString();
		}
	}


	//
	// GameOver()
	//
	public void GameOver ()
	{
		string str = "Steins: " + GameManager.Instance.NumTotalSteinsCaught.ToString() +
			         "\nYour best: " + GameManager.Instance.BestScore;

		if (GameManager.Instance.BestScore > GameManager.Instance.LastBest)
		{
			str += "\nNEW RECORD!";
		}

		score.text = str;
	}
}
