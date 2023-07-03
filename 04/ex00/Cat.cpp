#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "\033[32mCat Constructor\033[0m" << std::endl;
}

Cat::~Cat()
{
	std::cout << "\033[31mCat Deconstructor\033[0m" << std::endl;
}

// copy constructor
Cat::Cat(const Cat& copy):
	Animal()
{
	*this = copy;
	std::cout << "\033[32mCat copy Constructor\033[0m" << std::endl;
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