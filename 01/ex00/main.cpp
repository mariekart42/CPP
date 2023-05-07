#include "zombie.hpp"

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