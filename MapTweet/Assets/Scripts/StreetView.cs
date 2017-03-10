using UnityEngine;
using System.Collections;

public class StreetView : MonoBehaviour
{

	public float speed = 0.5f;
	public Transform rotorY;
	public Transform rotorX;

	private Vector3 dragStart;
	private Vector3 dragDelta;
	private Vector3 initialEulers;

	void Start()
	{
		dragDelta = Vector3.zero;
	}

	void Update()
	{
		//start mouse drag
		if (Input.GetMouseButtonDown(0))
		{
			dragStart = Input.mousePosition;
			initialEulers = new Vector3(rotorX.localEulerAngles.x, rotorY.localEulerAngles.y, 0f);
		}
		//drag process
		else if (Input.GetMouseButton(0))
		{
			//find amount of drag
			dragDelta = Input.mousePosition - dragStart;

			//apply y rotation
			Vector3 eulers = rotorY.localEulerAngles;
			eulers.y = initialEulers.y - dragDelta.x * speed;
			rotorY.localEulerAngles = eulers;

			//apply x rotation
			eulers = rotorX.localEulerAngles;
			eulers.x = initialEulers.x + dragDelta.y * speed;

			//Unity 5.5.0: bring rotation range to [-180, 180] interval, instead of default [0, 360]
			if (eulers.x > 180f)
				eulers.x -= 360f;

			eulers.x = Mathf.Clamp(eulers.x, -89.9f, 89.9f);    //so that rotation does not go on vertical flip
			rotorX.localEulerAngles = eulers;
		}
	}
}