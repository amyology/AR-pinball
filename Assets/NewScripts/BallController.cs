using UnityEngine;
using System.Collections;

public class BallController : MonoBehaviour {
	public float ballForce = 1000;
	public Rigidbody2D rb;
	bool ballActive = false;

	void OnMouseDown () {
		if (ballActive == false) {
			ballActive = true;
			rb.AddForce (new Vector2(0,ballForce));
		}
	}
}
