#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(const std::string&);
		~ScavTrap();
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& other);
		void guardGate();
};

#endif