#include "ClapTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap(){}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}