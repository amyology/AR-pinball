using UnityEngine;
using System.Collections;

public class RaycastBall : MonoBehaviour {

	Ray ray;
	RaycastHit hit;

	public float ballForce = 1000;
	public Rigidbody2D rb;
	bool ballActive = false;

	void FixedUpdate () {
		foreach(Touch touch in Input.touches){

			ray = Camera.main.ScreenPointToRay (touch.position);

			if (Physics.Raycast (ray, out hit, Mathf.Infinity)) {

				if (hit.transform.gameObject.tag == "BallButton" && ballActive == false) {
					ballActive = true;
					rb.AddForce (new Vector2(0,ballForce));
				}
			}
		}
	}
}
