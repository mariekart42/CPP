#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap() 
	:ClapTrap("Default")
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default ScapTrap Constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	:ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << name << " ScapTrap Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " ScapTrap Deconstructor" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	this->_name = other._name;
	std::cout << "ScavTrap copy assigment overload has been called!" << std::endl;
	return (*this);
}