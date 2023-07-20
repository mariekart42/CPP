#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[32m Dog Constructor\033[0m" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "\033[31m Dog Deconstructor\033[0m" << std::endl;
	delete _brain;
}

// copy constructor
Dog::Dog(const Dog& copy): Animal()
{
	std::cout << "\033[32m Dog copy Constructor\033[0m" << std::endl;
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
	std::cout << " Dog setIdea member function called." << std::endl;
	this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	std::cout << " Dog getIdea member function called." << std::endl;
	return(this->_brain->getIdea(index));
}

void Dog::makeSound(void) const
{
	std::cout << " BARK" << std::endl;
}