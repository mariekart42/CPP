#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl(){}

void Harl::debug(void)
{
	std::cout << "degugggging" << std::endl;
}
void Harl::info(void)
{
	std::cout << "gimme moa info" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "last warning" << std::endl;

}
void Harl::error(void)
{
	std::cout << "error bitch" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string complainArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	// create array of referenced pointers to private functions of Harl class
	void (Harl::*functionArray[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int x = 0; x<4; x++)
		if (level == complainArray[x])
			return ((this->*functionArray[x])(), (void)0);
}
