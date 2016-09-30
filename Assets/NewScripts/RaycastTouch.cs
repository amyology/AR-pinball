using UnityEngine;
using System.Collections;

public class RaycastTouch : MonoBehaviour {

	Ray ray;
	Ray ray2;
	RaycastHit hit;
	//GameObject leftFlipper;
	//GameObject rightFlipper;
	public HingeJoint2D leftFlipperJoint;
	public HingeJoint2D rightFlipperJoint;
	public GUIText dbText;

	void Start () {
//		leftFlipper = GameObject.FindWithTag ("Left");
//		leftFlipperJoint = leftFlipper.GetComponent<HingeJoint2D> ();
//		rightFlipper = GameObject.FindWithTag ("Right");
//		rightFlipperJoint = rightFlipper.GetComponent<HingeJoint2D> ();
	}

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
			}

		}

		if (Input.GetTouch (0).phase == TouchPhase.Ended) {
			leftFlipperJoint.useMotor = false;

			rightFlipperJoint.useMotor = false;
		}
	}
}
