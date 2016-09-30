using UnityEngine;
using System.Collections;

public class RaycastTouch : MonoBehaviour {

	Ray ray;
	RaycastHit hit;
	public HingeJoint2D leftFlipperJoint;
	public HingeJoint2D rightFlipperJoint;
	public GUIText dbText;

	public float ballForce = 1000;
	public Rigidbody2D rb;
	bool ballActive = false;

	void FixedUpdate ()
	{
		if (Input.touchCount > 0 || Input.GetTouch (0).phase == TouchPhase.Began) {
			
			ray = Camera.main.ScreenPointToRay (Input.GetTouch (0).position);

			Debug.DrawRay (ray.origin, ray.direction * 20, Color.red);

			if (Physics.Raycast (ray, out hit, Mathf.Infinity)) {
				
				if (hit.transform.gameObject.tag == "Leftie") {
					leftFlipperJoint.useMotor = true;
				}

				if (hit.transform.gameObject.tag == "Rightie") {
					rightFlipperJoint.useMotor = true;
				}

				if (hit.transform.gameObject.tag == "BallButton") {
					if (ballActive == false) {
						ballActive = true;
						rb.AddForce (new Vector2(0,ballForce));
					}
				}
			}

		}

		if (Input.GetTouch (0).phase == TouchPhase.Ended) {
			leftFlipperJoint.useMotor = false;

			rightFlipperJoint.useMotor = false;
		}
	}
}
