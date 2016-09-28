using UnityEngine;
using System.Collections;

public class LeftFlipperScript : MonoBehaviour {

	HingeJoint2D flipperJoint;

	void Start () {
		flipperJoint = GetComponent<HingeJoint2D> ();
	}

	public void FlipperDown () {
		flipperJoint.useMotor = true;
	}

	public void FlipperUp () {
		flipperJoint.useMotor = false;
	}
}