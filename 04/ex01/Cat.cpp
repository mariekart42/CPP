#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor" << std::endl;
	delete _brain;
}

// copy constructor
Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy Constructor" << std::endl;
	_brain = new Brain();
	*_brain = *(copy._brain);
	_type = copy._type;
}

// overload operator =
Cat &Cat::operator=(const Cat &src)
{
	_type = src._type;
	*_brain = *(src._brain);
	return (*this);
}

void Cat::setIdea(int index, std::string idea)
{
	std::cout << "Cat setIdea member function called." << std::endl;
	this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	std::cout << "Cat getIdea member function called." << std::endl;
	return(this->_brain->getIdea(index));
}

void Cat::makeSound(void) const
{
	std::cout << "MIAUUU" << std::endl;
}