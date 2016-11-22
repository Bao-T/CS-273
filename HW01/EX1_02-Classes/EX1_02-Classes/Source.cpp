/*Bao Tran
CS273-1
Whitworth University*/
#include <iostream>
#include <math.h>
class Circle {
private:
	double radius;//Problem #11-b
	const double pi = atan(1) * 4;
public:
	Circle() { radius = 0;}//Problem #11-c
	Circle(double size) { radius = size; }//Problem #11-d
	double getArea() //Problem #11-e
	{ 
		return pi*radius*radius;
	}
	double getRadius(){ return radius; }//Problem #11-f
	void setRadius(double nRadius) { radius = nRadius; } //Problem #11-f
};
int main()
{
	Circle myCircle1();//Problem #12
	Circle myCircle2(10);//Problem #13
	Circle *pointerCircle = new Circle(12);//Problem #14
	Circle circleArray[10];//Problem #15
	for (int i = 0; i < 10; i++)//Problem #16
	{
		circleArray[i].setRadius(2);
	}


}