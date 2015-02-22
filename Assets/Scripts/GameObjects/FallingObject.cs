//
// FallingObject.cs
//

using UnityEngine;
using System.Collections;

//
// FallingObject
//
public class FallingObject : MonoBehaviour
{
	public GameObject prefab;
	public int speed;
	public AudioClip[] audioClips;


	//
	// Update()
	//
	void Update ()
	{
		if (GameManager.Instance.GameOver == true) return;
		if ((GameManager.Instance.CurrentLevel == 2) && (this.CompareTag("bomb"))) speed = 32;
		if ((GameManager.Instance.CurrentLevel == 3) && (this.CompareTag("bomb"))) speed = 34;
		if ((GameManager.Instance.CurrentLevel == 4) && (this.CompareTag("bomb"))) speed = 36;
		if ((GameManager.Instance.CurrentLevel == 5) && (this.CompareTag("bomb"))) speed = 38;
		
		transform.position = new Vector3 (transform.position.x,
		                                  transform.position.y - (speed * Time.deltaTime),
		                                  transform.position.z);
		
		if (transform.position.y < 0)
		{
			audio.PlayOneShot(audioClips[Random.Range(0, audioClips.Length)]);
			Instantiate(prefab, transform.position, Quaternion.identity);
			
			if (this.CompareTag("stein"))
			{
				GameManager.Notifications.PostNotification (this, "SteinBroken");
				//character.numSteinsBroken++;
			}
			
			transform.position = new Vector3(Random.Range(0, 60), 50, -16);
		}
	}
}