#pragma once
#include <iostream>
#include <string>
#include "phoneBook.hpp"

class contact
{
	public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string secret;
	std::string	phoneNumber;

	// init constructor
	contact()
	{
		// contact myContact;
		firstName = "";
		lastName = "";
		nickName = "";
		secret = "";
		phoneNumber = "";
	}

};