//
// PlayerController.cs
//

using UnityEngine;
using System.Collections;

//
// PlayerController
//
public class PlayerController : MonoBehaviour
{
	private float lastX;  // this will store the last position of the character
	public GameObject explosion;
	public AudioClip clip1;
	public AudioClip explosionClip;

	private int startingHealth = 100;
	private int currentHealth;
	public UnityEngine.UI.Slider healthSlider;

	public UnityEngine.UI.Image damageImage = null;
	public float flashSpeed = 5.0f;
	public Color flashColor = new Color (1.0f, 0.0f, 0.0f, 0.1f);
	public bool damaged = false;

	// Reference to Transform
	private Transform ThisTransform = null;

	//
	// Awake ()
	//
	void Awake ()
	{
		currentHealth = startingHealth;
	}


	//
	// Start ()
	//
	void Start ()
	{
		animation.Stop();  // this stops Unity from playing the character's default animation.

		// Get cached transform
		ThisTransform = transform;
	}


	//
	// Update ()
	//
	void Update ()
	{
		if (damaged == true)
		{
			damageImage.color = flashColor;
		}
		else
		{
			damageImage.color = Color.Lerp (damageImage.color, Color.clear, flashSpeed * Time.deltaTime);
		}

		damaged = false;

		if (Input.GetKey("right"))
		{
			transform.position = new Vector3(transform.position.x + 0.45f, transform.position.y, transform.position.z);
		}
		
		if (Input.GetKey("left"))
		{
			transform.position = new Vector3(transform.position.x - 0.45f, transform.position.y, transform.position.z);
		}
		
		if (lastX != transform.position.x)
		{	
			if (!animation.IsPlaying("catch"))
			{
				animation.Play("step");
			}
		}
		else
		{
			if (!animation.IsPlaying("catch"))
			{
				animation.Play("idle");
			}
		}
		
		lastX = transform.position.x;
	}


	//
	// TakeDamage()
	//
	void TakeDamage (int amount)
	{
		damaged = true;

		// Reduce health
		currentHealth -= amount;

		healthSlider.value = currentHealth;
		
		if ((currentHealth <= 0) && (GameManager.Instance.GameOver == false))
		{
			Death();
		}
	}


	//
	// Death()
	//
	void Death ()
	{
		GameManager.Instance.GameOver = true;
	}


	//
	// OnCollisionEnter()
	//
	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.CompareTag("bomb"))
		{
			Instantiate(explosion, col.gameObject.transform.position, Quaternion.identity);
			audio.PlayOneShot(explosionClip);
			
			animation.Stop();
			
			TakeDamage(20);
		}
		else if (col.gameObject.CompareTag("stein"))
		{
			GameManager.Notifications.PostNotification (this, "SteinCaught");

			animation.Play("catch");
			audio.PlayOneShot(clip1);
		}

		col.gameObject.transform.position = new Vector3 (Random.Range (0, 60), 50, -16);
	}
}