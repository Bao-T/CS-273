#pragma once
#include <iostream>
#include <math.h>
class Circle {
private:
	double radius;
	double pi = atan(1) * 4;
public:
	Circle() { radius = 0; }

	Circle(double size) { radius = size; }


	/*#28*/ 
	//Add the 2 circles with “+” to derive a 3rd circle object with a combined radii.
	Circle& operator+(const Circle &b)
	{
		Circle circle;
		circle.radius = this->radius + b.radius;
		return circle;
	}

	double getArea()
	{
		return pi*radius*radius;
	}
	double getRadius() { return radius; }
	void setRadius(double nRadius) { radius = nRadius; }
};