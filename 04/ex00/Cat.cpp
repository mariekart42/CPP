#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor" << std::endl;
}

// copy constructor
Cat::Cat(const Cat& copy):
	Animal()
{
	*this = copy;
	std::cout << "Cat copy Constructor" << std::endl;
}

// overload operator =
Cat &Cat::operator=(const Cat &src)
{
	_type = src._type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "MIAUUU" << std::endl;
}