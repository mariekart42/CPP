#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "\033[33m" << name << "\033[0m" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main(void)
{
	Zombie *zombieArray;
	int n = 4;

	zombieArray = zombieHorde(n, "Pickle");

	for (int x = 0; x<n; x++)
		zombieArray[x].announce();
}