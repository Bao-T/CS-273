#include "readint.h"
#include <stdexcept>
#include <iostream>
using namespace std;

int read_int(const string &prompt, int low, int high)
{
	cin.exceptions(ios_base::failbit);
	if (low >= high)
	{
		throw invalid_argument("Smallest and largest values are invalid.");
	}

	int num = 0;
	while (true) // loop unti valid input
	{

		try {
			cout << prompt;
			cin >> num;
			if (num < low|| num > high)
			{
				throw "Error. Value out of range.";
			}
			return num;
		}
		catch (const char *e)
		{
			cout << "Exception Occured. " << e << endl;
			cin.clear();
			//skip current input line
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
		catch (ios_base::failure &ex)
		{
			cout << "Bad numeric string -- try again\n";
			//reset the error flag
			cin.clear();
			//skip current input line
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
	}
}
