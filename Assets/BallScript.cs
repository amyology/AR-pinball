using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BallScript : MonoBehaviour {

	public GameController gameController;
	public GameObject ball;
	public Rigidbody2D ballrb;
	float ballForce = 1000;
	bool ballActive = false;

	void FixedUpdate (){
		if (ballrb.transform.position.y < -6) {
			gameController.destroyBall ();
		}

	}

	void OnMouseDown () {
		if (ballActive == false) {
			ballActive = true;
			ballrb.AddForce (new Vector2(0,ballForce));
		}
	}

	void OnCollisionEnter2D (Collision2D collision) {
		if (collision.gameObject.tag == "bumper") {
			gameController.AddPoints ();
		}
	}
		
}
