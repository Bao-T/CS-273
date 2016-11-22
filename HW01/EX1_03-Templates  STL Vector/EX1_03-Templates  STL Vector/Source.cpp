/*Bao Tran
CS273-1
Whitworth University*/

#include <iostream>
#include<vector>
using namespace std;
//Problem #17
template <typename T>
void Swap(T&a, T&b) {
	T temp = a;
	a = b;
	b = temp;
};
// Problem #18
template <typename Type>
class MyVec {
private:
	Type *array; // dynamically allocated array
public:
	MyVec(int size) { // constructor creates array of size “size
		array = new Type[size];
	}
	~MyVec() { // destructor returns memory back to system
		delete[] array;
	}

};

int main()
{
	MyVec<char> doubleArray(2);
	std::vector<char> charVector; // Problem #20
	for (int i = 0; i < 20; i++) // Problem #21 size wasn't specifically given
	{
		charVector.push_back('a');
	}
	std::cout << charVector.size() << std::endl; //Problem #22
}