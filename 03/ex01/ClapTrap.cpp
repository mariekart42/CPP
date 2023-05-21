#include "ClapTrap.hpp"

// --------- FIGHT ---------
int ClapTrap::getHitPoints(void)
{
	return (_hitPoints);
}

bool ClapTrap::stillAlive(void)
{
	if (_hitPoints < 1)
	{
		std::cout<<"Nothing todo here, "<<_name<<" lost all it's hit Points"<<std::endl;
		return (false);
	}
	if (_energyPoints < 1)
	{
		std::cout<<"Nothing todo here, "<<_name<<" has no energy left!"<<std::endl;
		return (false);
	}
	return (true);
}

void	ClapTrap::status(void)
{
	std::cout << "\n\033[33m    ClapTrap " << _name << " status:" << std::endl;
	std::cout << "    |   Hit points:\t" << _hitPoints << std::endl;
	std::cout << "    |   Energy points:\t" << _energyPoints << std::endl;
	std::cout << "    |   Attack damage:\t" << _attackDamage << std::endl;
	std::cout << "\033[0m" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (stillAlive() == true)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		std::cout << _name << " now has " << _energyPoints << " energy points left." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
		std::cout<<"Shit "<<_name<< "died!"<<std::endl;
	_hitPoints -= amount;
	std::cout<<"ClapTrap "<<_name<<"takes "<<amount<<" amount of damage!"<<std::endl;
	std::cout<<_hitPoints<<" hit Points left!"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (stillAlive() == true)
	{
		std::cout<<"ClapTrap "<<_name<<" was repaired by "<<amount<<" amount of hit Points!"<<std::endl;
		std::cout<<_hitPoints<<" hit Points left!"<<std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
}


