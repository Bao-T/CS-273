#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

namespace Exam1 // NAMESPACE
{
	class Wheel
	{
	private:
		int _radius;
	public:
		Wheel(int radius) { _radius = radius; }
	};

	// STEP 1: Complete the implementation of the Vehicle base class 
	// as described in the UML diagram
	class Vehicle
	{
	protected:
		string _color;
		int _topspeed;
		vector<Wheel> wheels;

	public:
		Vehicle(string color) {
			this->_color = color;
		}
		virtual void Description() = 0;
	};

	// STEP 2:  Define the RaceCar, Sedan, and Pickup classes as described
	// in the UML diagram.   For this test, you do not need to separate
	// the class implementation into a cpp file.
	class RaceCar: public Vehicle {
		//Top speed: 250mph
		//Wheel radius: 305mm
	public:
		RaceCar(string color) : Vehicle(color) {
			_topspeed = 205;
			for (int i = 0; i < 4; i ++)
				 wheels.push_back(Wheel(305));
		}
		void Description() {
			cout << "I am a " << _color << " race car that can race " << _topspeed << "mph. Vroom!\n";
		}


	};

	class Sedan: public Vehicle {
		//Top speed: 95mph
		//Wheel radius: 381mm
	private:
		int number_of_seats;
	public:
		Sedan(string color, int seats) : Vehicle(color)
		{
			_topspeed = 95;
			number_of_seats = seats;
			_color = color;
			for (int i = 0; i < 4; i++)
				wheels.push_back(Wheel(381));
		}
		void Description() {
			cout << "I am a " << _color << " sedan that can carry " << number_of_seats << " people at "<<_topspeed<<"mph. Yea!\n";
		}
	};

	class Pickup:public Vehicle {
		//Top speed: 85mph
		//Wheel radius: 432mm
	private:
		int hauling_capacity;
	public:
		Pickup(string color, int capacity) : Vehicle(color)
		{
			_topspeed = 85;
			hauling_capacity = capacity;
			_color = color;
			for (int i = 0; i < 4; i++)
				wheels.push_back(Wheel(432));
		}
		void Description() {
			cout << "I am a " << _color << " pickup that can haul " << hauling_capacity << " sq. feet at " << _topspeed << "mph.\n";;
		}

	};
}


int main()
{
	Exam1::Vehicle * Garage[3];

	// STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements 
	// in the Garage array.  Remember the classes are defined in the namespace Exam1.
	Garage[0] = (new Exam1::RaceCar("unicorn (Rainbow)"));
	Garage[1] = (new Exam1::Sedan("hybrid (brown)",5));
	Garage[2] = (new Exam1::Pickup("transformer",600));

	for (int i = 0; i < 3; ++i)
	{
		// The method Description() should display an output like 
		// "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"
		Garage[i]->Description();
		}
}

