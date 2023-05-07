#pragma once

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
		firstName = "    -";
		lastName = "    -";
		nickName = "    -";
		secret = "    -";
		phoneNumber = "    -";
	}
};