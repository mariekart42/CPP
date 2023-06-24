#include "Animal.hpp"

Animal::Animal(void):
	_type("Animal")
{
	std::cout << "Animal default Constructor" << std::endl;
}

// copy constructor
Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal copy Constructor" << std::endl;
}

// oberload = operator
Animal &Animal::operator=(const Animal &obj)
{
	_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "no animal, no sound!" << std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}