#pragma once
#ifndef SAVINGS_H_
#define SAVINGS_H_
#include "Account.h"
class Savings_Account : public Account
{
public:
	Savings_Account(Customer *cust, int id) : Account(cust, id){}

	void add_interest(){}
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