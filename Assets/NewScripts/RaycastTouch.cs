using UnityEngine;
using System.Collections;

public class RaycastTouch : MonoBehaviour {

	Ray ray;
	RaycastHit hit;
	public HingeJoint2D leftFlipperJoint;
	public HingeJoint2D rightFlipperJoint;

	void Update () {
		foreach (Touch touch in Input.touches) { 
			
			ray = Camera.main.ScreenPointToRay (touch.position);

			if (Physics.Raycast (ray, out hit, Mathf.Infinity)) {
			
				if (hit.transform.gameObject.tag == "Leftie" && touch.phase == TouchPhase.Began) {
					leftFlipperJoint.useMotor = true;
				}

				if (hit.transform.gameObject.tag == "Leftie" && touch.phase == TouchPhase.Ended) {
					leftFlipperJoint.useMotor = false;
				}

				if (hit.transform.gameObject.tag == "Rightie" && touch.phase == TouchPhase.Began) {
					rightFlipperJoint.useMotor = true;
				}

				if (hit.transform.gameObject.tag == "Rightie" && touch.phase == TouchPhase.Ended) {
					rightFlipperJoint.useMotor = false;
				}
			}
		}
	}
}
