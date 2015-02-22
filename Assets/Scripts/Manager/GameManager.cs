//
// GameManager.cs
//
// Singleton and persistent object to manage game state
// For high-level control over game
//

using UnityEngine;
using System.Collections;

[RequireComponent(typeof(NotificationsManager))]

//
// GameManager
//
public class GameManager : MonoBehaviour
{
	private static GameManager instance = null;
	private static NotificationsManager notifications = null;

	private bool gameOver = false;
	private int currentLevel = 1;

	private int numSteinsCaught = 0;
	private int numTotalSteinsCaught = 0;
	private int numSteinsBroken = 0;
	private int bestScore = 0;
	private int lastBest = 0;


	//
	// Instance
	//
	public static GameManager Instance
	{
		get
		{
			if (instance == null) instance =
				new GameObject ("GameManager").AddComponent<GameManager> ();

			return instance;
		}
	}


	//
	// Notifications
	//
	public static NotificationsManager Notifications
	{
		get
		{
			if (notifications == null) notifications =
				Instance.GetComponent<NotificationsManager> ();

			return notifications;
		}
	}


	//
	// GameOver()
	//
	public bool GameOver
	{
		get { return gameOver; }

		set
		{
			gameOver = value;

			if (gameOver == true)
			{
				LastBest = BestScore;
		
				if (NumTotalSteinsCaught > BestScore)
				{
					BestScore = NumTotalSteinsCaught;
				}

				Notifications.PostNotification(this, "GameOver");
			}
		}
	}


	//
	// CurrentLevel
	//
	public int CurrentLevel
	{
		get { return currentLevel; }

		set
		{
			currentLevel = value;
			NumSteinsCaught = 0;
			NumSteinsBroken = 0;

			if (currentLevel == 1)
			{
				GameOver = false;
				NumTotalSteinsCaught = 0;
			}
		}
	}


	//
	// NumSteinsCaught
	//
	public int NumSteinsCaught
	{
		get { return numSteinsCaught; }

		set
		{
			numSteinsCaught = value;
			GameManager.Notifications.PostNotification (this, "NumSteinsCaughtUpdated");
		}
	}


	//
	// NumTotalSteinsCaught
	//
	public int NumTotalSteinsCaught
	{
		get { return numTotalSteinsCaught; }
		set { numTotalSteinsCaught = value; }
	}


	//
	// NumSteinsBroken
	//
	public int NumSteinsBroken
	{
		get { return numSteinsBroken; }
		set { numSteinsBroken = value; }
	}


	//
	// BestScore
	//
	public int BestScore
	{
		get { return bestScore; }
		set { bestScore = value; }
	}


	//
	// LastBest
	//
	public int LastBest
	{
		get { return lastBest; }
		set { lastBest = value; }
	}


	//
	// Awake ()
	//
	void Awake ()
	{
		if ((instance) && (instance.GetInstanceID() != GetInstanceID()))
		{
			DestroyImmediate (gameObject);
		}
		else
		{
			instance = this;
			DontDestroyOnLoad (gameObject);
		}
	}


	//
	// Start ()
	//
	void Start ()
	{
		Notifications.AddListener (this, "SteinCaught");
		Notifications.AddListener (this, "SteinBroken");
	}


	//
	// PlayAgainOnClick()
	//
	// This function gets called when the user clicks the 'Play Again' button.
	//
	public void PlayAgainOnClick ()
	{
		CurrentLevel = 1;
		Application.LoadLevel ("Game");
	}


	//
	// ReturnToMenuOnClick()
	//
	public void ReturnToMenuOnClick ()
	{
		Application.LoadLevel ("Title");
	}


	//
	// SteinCaught()
	//
	public IEnumerator SteinCaught ()
	{
		NumSteinsCaught++;
		numTotalSteinsCaught++;

		if (numSteinsCaught >= 20)
		{
			if (CurrentLevel == 5)
			{
				BestScore = 100;
			}
			
			float fadeTime = GetComponent<Fading> ().BeginFade (1);
			yield return new WaitForSeconds (fadeTime);
			Application.LoadLevel ("Summary");
		}
	}


	//
	// SteinBroken()
	//
	public void SteinBroken ()
	{
		NumSteinsBroken++;
	}
}