#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "\033[32mWrong Animal Comstructor\033[0m" << std::endl;
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[31mWrong Animal Deconstructor\033[0m" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << " * * * loud silence * * * " << std::endl;
}

std::string WrongAnimal::getType(void)
{
	return (_type);
}