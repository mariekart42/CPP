#pragma once
#include <iostream>
#include "phoneBook.hpp"

class contact
{
	public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string secret;
	std::string	phoneNumber;

	contact();
	~contact();
};