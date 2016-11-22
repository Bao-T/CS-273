/*Bao Tran
CS273-1
Whitworth University*/

#include <iostream>
using namespace std;
int *doubleCapacity(int *list, int size);
int main()
{
	double *pointerVariable; // Problem #1
	pointerVariable = new double; // Problem #2
	*pointerVariable = 4.12; // Problem #3
	delete pointerVariable; // Problem #4
	/* Problem # 5
	char *variable ;
	variable = 3;
	*The second line of code changes the pointer and not the value it is pointing to. Since variable was declared as a pointer, 
	variable = 3 makes the address of variable to 3 instead of *variable = 3 which would change the value in variable's address to 3
	*/
	int myVar;
	cout << &myVar; // Problem #6
	int *myArray;
	myArray = new int[10]; // Problem #7
	for (int i = 0; i < 10; i++) // Problem #8
	{
		*(myArray + i) = 42;
	}
	delete[] myArray; 
	

}
int *doubleCapacity(int *list, int size) //Problem #10
{
	int *newArray = new int[size*2];
	for (int i = 0; i < size; i++)
	{
		*(newArray+i) = *(list + i); 
	}
	delete[] list;//?
	return newArray;
}