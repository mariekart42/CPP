#pragma once
#include <iostream>

class Zombie
{
	public:
		std::string name;
		Zombie();
		Zombie(std::string name_);
		~Zombie();
		void announce(void);
};
Zombie* zombieHorde(int n, std::string name_);