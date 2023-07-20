#include "Animal.hpp"

Animal::Animal(void):
	_type("Animal")
{
	std::cout << "\033[32mAnimal default Constructor\033[0m" << std::endl;
}

// copy constructor
Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "\033[32mAnimal copy Constructor\033[0m" << std::endl;
}

// oberload = operator
Animal &Animal::operator=(const Animal &obj)
{
	_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\033[31mAnimal Deconstructor\033[0m" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "no animal, no sound!" << std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}