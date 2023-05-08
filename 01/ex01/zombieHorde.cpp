#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name_)
{
	Zombie *zombies = new Zombie[n];
	for (int x = 0; x<n; x++)
		zombies[x].name = name_;
	return (zombies);
}