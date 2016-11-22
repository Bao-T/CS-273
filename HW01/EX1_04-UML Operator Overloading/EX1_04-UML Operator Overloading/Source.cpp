/*Bao Tran
CS273-1
Whitworth University*/

/*
#25:True
#26:No
*/

/*#27*/
#include "Cat.h"
#include "Circle.h"
#include <iostream>
using namespace std;
int main()
{
	Cat mittens; 

	Circle c1(4);
	Circle c2(5);
	Circle c3;

	c3 = c1 + c2; // Apparently using a const pi value in the class breaks the = operation... Hours later realizing this.

	std::cout << c3.getRadius() << std::endl;

}
