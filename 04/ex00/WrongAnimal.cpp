#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "Wrong Animal Comstructor" << std::endl;
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
	std::cout << "Wrong Animal Deconstructor" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "[wrong] no animal, no sound" << std::endl;
}

std::string WrongAnimal::getType(void)
{
	return (_type);
}