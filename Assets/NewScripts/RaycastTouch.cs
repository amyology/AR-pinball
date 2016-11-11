using UnityEngine;
using System.Collections;

public class RaycastTouch : MonoBehaviour {

	Ray ray;
	RaycastHit hit;
	public HingeJoint2D leftFlipperJoint;
	public HingeJoint2D rightFlipperJoint;
	JointMotor2D leftMotor;
	JointMotor2D rightMotor;

	public SpringJoint2D leftSpring;
	public SpringJoint2D rightSpring;

	void Update () {

		leftMotor = leftFlipperJoint.motor;
		rightMotor = rightFlipperJoint.motor;

		foreach (Touch touch in Input.touches) { 
			
			ray = Camera.main.ScreenPointToRay (touch.position);

			if (Physics.Raycast (ray, out hit, Mathf.Infinity)) {
			
				if (hit.transform.gameObject.tag == "Leftie" && touch.phase == TouchPhase.Began) {
					leftFlipperJoint.useMotor = true;
//					leftMotor.motorSpeed = -500;
//					leftFlipperJoint.motor = leftMotor;
				}

				if (hit.transform.gameObject.tag == "Leftie" && touch.phase == TouchPhase.Ended) {
//					leftMotor.motorSpeed = 500;
//					leftFlipperJoint.motor = leftMotor;
					leftFlipperJoint.useMotor = false;
				}

				if (hit.transform.gameObject.tag == "Rightie" && touch.phase == TouchPhase.Began) {
					rightFlipperJoint.useMotor = true;
//					rightMotor.motorSpeed = 500;
//					rightFlipperJoint.motor = rightMotor;
				}

				if (hit.transform.gameObject.tag == "Rightie" && touch.phase == TouchPhase.Ended) {
//					rightMotor.motorSpeed = -500;
//					rightFlipperJoint.motor = rightMotor;
					rightFlipperJoint.useMotor = false;
				}
			}
		}
	}
}
