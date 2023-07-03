#include "zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "\033[33m" << name << "\033[0m" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main(void)
{
	Zombie *ptr;
	ptr = new Zombie();
	delete ptr;

	randomChump("asebvgfda");
	randomChump("2");
	randomChump("3");
}