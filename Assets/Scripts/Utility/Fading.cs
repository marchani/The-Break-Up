//
// Fading.cs
//

using UnityEngine;
using System.Collections;

//
// Fading
//
public class Fading : MonoBehaviour
{
	private Texture2D fadeOutTexture;
	public float fadeSpeed = 0.8f;
	private Rect ScreenRect;

	private float alpha = 1.0f;
	private int fadeDir = -1;

	//
	// Start ()
	//
	void Start ()
	{
		fadeOutTexture = new Texture2D (1, 1);
		fadeOutTexture.SetPixel (0, 0, new Color (255, 0, 0, 0f));
		fadeOutTexture.Apply ();
	}


	//
	// Update ()
	//
	void Update ()
	{
		ScreenRect.x = 0;
		ScreenRect.y = 0;
		ScreenRect.width = Screen.width;
		ScreenRect.height = Screen.height;
	}


	//
	// OnGUI()
	//
	void OnGUI ()
	{
		alpha += fadeDir * fadeSpeed * Time.deltaTime;
		alpha = Mathf.Clamp01 (alpha);

		fadeOutTexture.SetPixel (0, 0, new Color (255, 255, 255, alpha));
		fadeOutTexture.Apply ();
		GUI.DrawTexture (ScreenRect, fadeOutTexture);	
	}


	//
	// BeginFade()
	//
	public float BeginFade (int direction)
	{
		fadeDir = direction;
		return (fadeSpeed);
	}


	//
	// OnLevelWasLoaded()
	//
	void OnLevelWasLoaded()
	{
		BeginFade (-1);
	}
}
