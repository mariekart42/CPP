#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor" << std::endl;
}

// copy constructor
Dog::Dog(const Dog& copy):
	Animal()
{
	*this = copy;
	std::cout << "Dog copy Constructor" << std::endl;
}

// overload operator =
Dog &Dog::operator=(const Dog &src)
{
	_type = src._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "BARK" << std::endl;
}