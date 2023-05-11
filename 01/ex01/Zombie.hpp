#pragma once
#include <iostream>

class Zombie
{
	public:
		std::string name;
		Zombie();
		~Zombie();
		void announce(void);
};
Zombie* zombieHorde(int n, std::string name_);