#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "Wrong Cat";
	std::cout << "Wrong Cat Constructor" << std::endl;
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
	std::cout << "Wrong Cat Deconstructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "[wrong] MIAUUU" << std::endl;
}