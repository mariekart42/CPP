#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor" << std::endl;
	delete _brain;
}

// copy constructor
Dog::Dog(const Dog& copy): Animal()
{
	std::cout << "Dog copy Constructor" << std::endl;
	_brain = new Brain();
	*this = copy;
}

// overload operator =
Dog &Dog::operator=(const Dog &src)
{
	_type = src._type;
	*_brain = *(src._brain);
	return (*this);
}

void Dog::setIdea(int index, std::string idea)
{
	std::cout << "Dog setIdea member function called." << std::endl;
	this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	std::cout << "Dog getIdea member function called." << std::endl;
	return(this->_brain->getIdea(index));
}

void Dog::makeSound(void) const
{
	std::cout << "BARK" << std::endl;
}