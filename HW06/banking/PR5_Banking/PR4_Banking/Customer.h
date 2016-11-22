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
private:
	std::string address;
	short unsigned int age;
	int customer_number;
	std::string name;
	std::string telephone_number;
	int checking_interest;
	int check_charge;
	int overdraft_penalty;
	int saving_interest;
public:
	Customer(std::string c_name, std::string c_address, std::string c_telephone, int c_age);
	std::string get_address();
	short unsigned int get_age();
	int get_customer_number();
	std::string get_name();
	std::string get_telephone_number();
	int get_checking_interest();
	int get_check_charge();
	int get_overdraft_penalty();
	int get_saving_interest();

	void set_address(std::string i_address);
	void set_age(short unsigned int i_age);
	void set_customer_number(int i_customer_number);
	void set_name(std::string i_name);
	void set_telephone_number(std::string i_telephone_number);
	void set_checking_interest(int i_checking_interest);
	void set_check_charge(int i_check_charge);
	void set_overdraft_penalty(int i_overdraft_penalty);
	void set_saving_interest(int i_saving_interest);


};


#endif