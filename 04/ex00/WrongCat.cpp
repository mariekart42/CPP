#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "Wrong Cat";
	std::cout << "\033[32mWrong Cat Constructor\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	_type = src._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\033[31mWrong Cat Deconstructor\033[0m" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "[wrong] MIAUUU" << std::endl;
}