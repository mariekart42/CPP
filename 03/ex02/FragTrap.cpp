#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


FragTrap::FragTrap() 
	:ClapTrap("Default")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	:ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << name << " FragTrap Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) :ClapTrap()
{
	*this = copy;
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " FragTrap Deconstructor" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	this->_name = other._name;
	std::cout << "FragTrap copy assigment overload has been called!" << std::endl;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	if (!stillAlive())
		return;
	std::cout << "FragTrap " << _name << " wants to high five!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (!stillAlive())
		return;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! ";
	std::cout << _name << " now has " << _energyPoints << " energy points left." << std::endl;
}