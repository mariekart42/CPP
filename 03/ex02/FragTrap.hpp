#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(const std::string&);
		~FragTrap();
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& other);
		void highFiveGuys(void);
		void attack(const std::string& target);
};

#endif