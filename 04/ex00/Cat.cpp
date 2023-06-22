#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default Constructor" << std::endl;
}

// copy Constructor
Cat::Cat(const Cat& copy)
{
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat default Deconstructor" << std::endl;
}