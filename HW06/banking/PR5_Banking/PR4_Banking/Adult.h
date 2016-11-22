#pragma once
#ifndef Adult_H_
#define Adult_H_
#include "Customer.h"
class Adult : public Customer
{
public:
	Adult(std::string c_name, std::string c_address, std::string c_telephone, int c_age) :Customer(c_name, c_address,c_telephone, c_age)
	{
		set_checking_interest(1);
		set_check_charge(1);
		set_overdraft_penalty(1);
		set_saving_interest(1);

	}
};


#endif