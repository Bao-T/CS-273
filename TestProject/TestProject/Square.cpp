#include "Square.h"

bool isSquare(int a, int b, int c, int d) {
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) // checks if inputs are 0 or less
	{
		return false;
	}
	if (a == b && a == c && a == d) // if all sides are equal
	{
		return true;
	}
	return false;
}
