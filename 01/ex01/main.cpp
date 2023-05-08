#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie() {}

Zombie* zombieHorde(int n, std::string name_)
{
	Zombie *zombies = new Zombie[n];
	for (int x = 0; x<n; x++)
		zombies[x].name = name_;
	return (zombies);
}

void Zombie::announce(void)
{
	std::cout << "\033[33m" << name << "\033[0m" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main(void)
{
	Zombie *zombieArray;
	int n = 4;

	zombieArray = zombieHorde(n, "Gurke");

	for (int x = 0; x<n; x++)
		zombieArray[x].announce();
}