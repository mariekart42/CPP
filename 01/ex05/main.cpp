#include "Harl.hpp"

void Harl::throwError(std::string msg)
{
	std::cout << msg << std::endl;
	this->initSuccess = false;
}

Harl::Harl(int ac, char **&av)
{
	this->initSuccess = true;
	// check av:
	if (ac != 2)
		throwError("Invalid Input:\n  ./Harl  <complain>");
	(void)av;
}
Harl::~Harl(){}

void Harl::complain(std::string level)
{
	std::cout <<level;
}

int main(int ac, char **av)
{
	Harl obj(ac, av);

	// declare pointer to member function:
	void (Harl::*ptr)(std::string);

	//assign ptr to complain function in class:
	ptr = &Harl::complain;
	(obj.*ptr)("something");
}