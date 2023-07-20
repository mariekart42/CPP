#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "\033[32mDog Constructor\033[0m" << std::endl;
}

Dog::~Dog()
{
	std::cout << "\033[31mDog Deconstructor\033[0m" << std::endl;
}

// copy constructor
Dog::Dog(const Dog& copy):
	Animal()
{
	*this = copy;
	std::cout << "\033[32mDog copy Constructor\033[0m" << std::endl;
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