#include "zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *ptr;
	ptr = new Zombie(name);
	return (ptr);
}

void randomChump(std::string name)
{
	Zombie *ptr;
	ptr = new Zombie(name);
	delete ptr;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main(void)
{
	Zombie *ptr;
	ptr = new Zombie();
	delete ptr;

	randomChump("1");
	randomChump("2");
	randomChump("3");
}