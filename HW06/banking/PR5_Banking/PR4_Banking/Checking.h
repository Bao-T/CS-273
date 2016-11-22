#pragma once
#ifndef CHECKING_H_
#define CHECKING_H_
#include "Account.h"
class Checking_Account: public Account
{
public:
	Checking_Account(Customer *cust, int id) : Account(cust, id)
	{}
	void add_interest() {}
	std::string to_string() {
		std::stringstream ss;
		ss << "Account type: Savings \n";
		ss << "  Owner: " << this->customer->get_name() << std::endl;
		ss << "  Balance: " << balance << std::endl;
		ss << "  Account ID: " << account_number << std::endl;
		return ss.str();
	}
};
#endif
