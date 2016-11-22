#include "Customer.h"


Customer::Customer(std::string c_name, std::string c_address, std::string c_telephone, int c_age)
{
	name = c_name;
	address = c_address;
	telephone_number = c_telephone;
	age = c_age;
	checking_interest = 0;
	check_charge = 0;
	overdraft_penalty = 0;
	saving_interest = 0;
	
}

std::string Customer::get_address() { return address; }
short unsigned int Customer::get_age() { return age; }
int Customer::get_customer_number() { return customer_number; }
std::string Customer::get_name() { return name; }
std::string Customer::get_telephone_number() { return telephone_number; }
int Customer::get_checking_interest() { return checking_interest; }
int Customer::get_check_charge() { return check_charge; }
int Customer::get_overdraft_penalty() { return overdraft_penalty; }
int Customer::get_saving_interest() { return saving_interest; }

void Customer::set_address(std::string i_address) { address = i_address; }
void Customer::set_age(short unsigned int i_age) { age = i_age; }
void Customer::set_customer_number(int i_customer_number) { customer_number = i_customer_number; }
void Customer::set_name(std::string i_name) { name = i_name; }
void Customer::set_telephone_number(std::string i_telephone_number) { telephone_number = i_telephone_number; }
void Customer::set_checking_interest(int i_checking_interest) { checking_interest = i_checking_interest; }
void Customer::set_check_charge(int i_check_charge) { check_charge = i_check_charge; }
void Customer::set_overdraft_penalty(int i_overdraft_penalty) { overdraft_penalty = i_overdraft_penalty; }
void Customer::set_saving_interest(int i_saving_interest) { saving_interest = i_saving_interest; }

