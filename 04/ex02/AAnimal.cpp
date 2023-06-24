#include "AAnimal.hpp"

AAnimal::AAnimal(void):
	_type("AAnimal")
{
	std::cout << "AAnimal default Constructor" << std::endl;
}

// copy constructor
AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
	std::cout << "AAnimal copy Constructor" << std::endl;
}

// oberload = operator
AAnimal &AAnimal::operator=(const AAnimal &obj)
{
	_type = obj._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Deconstructor" << std::endl;
}

void AAnimal::makeSound(void) const
{
	std::cout << "no animal, no sound!" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (_type);
}