#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
protected:
	std::string address;
	int age;
	int customer_number;
	std::string name;
	std::string telephone_number;
	double checking_interest;
	double check_charge;
	double overdraft_penalty;
	double saving_interest;

public:
	Customer(std::string c_name, std::string c_address, std::string c_telephone, int c_age, int c_number)
	{
		name = c_name;
		address = c_address;
		telephone_number = c_telephone;
		age = c_age;
		customer_number = c_number;
	
	}
	
	std::string get_address() { return address; }
	short unsigned int get_age() { return age; }
	int get_customer_number() { return customer_number; }
	std::string get_name() { return name; }
	std::string get_telephone_number() { return telephone_number; }
	double get_checking_interest() { return checking_interest; }
	double get_check_charge() { return check_charge; }
	double get_overdraft_penalty() { return overdraft_penalty; }
	double get_saving_interest() { return saving_interest; }


	void set_address(std::string i_address) { address = i_address; }
	void set_age(short unsigned int i_age) { age = i_age; }
	void set_customer_number(int i_customer_number) { customer_number = i_customer_number; }
	void set_name(std::string i_name) { name = i_name; }
	void set_telephone_number(std::string i_telephone_number) { telephone_number = i_telephone_number; }

};

#endif
#ifndef Adult_H_
#define Adult_H_
class Adult : public Customer
{

public:
	Adult(std::string c_name, std::string c_address, std::string c_telephone, int c_age,int c_number) :Customer(c_name, c_address, c_telephone, c_age,c_number)
	{
		checking_interest = 1.3;
		saving_interest = 1.5;
		check_charge = 1.00;
		overdraft_penalty = 30;
	}

};


#endif
#ifndef Senior_H_
#define Senior_H_

class Senior : public Customer
{

public:
	Senior(std::string c_name, std::string c_address, std::string c_telephone, int c_age,int c_number) :Customer(c_name, c_address, c_telephone, c_age,c_number)
	{
		checking_interest = 1.6;
		saving_interest = 1.7;
		check_charge = .75;
		overdraft_penalty = 20;
	}

};


#endif
#ifndef Student_H_
#define Student_H_
class Student : public Customer
{
public:
	Student(std::string c_name, std::string c_address, std::string c_telephone, int c_age,int c_number) :Customer(c_name, c_address, c_telephone, c_age,c_number)
	{
		checking_interest = 1.2;
		saving_interest = 1.4;
		check_charge = 1.25;
		overdraft_penalty = 25;
	}

};


#endif