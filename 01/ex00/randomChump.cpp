#include "zombie.hpp"

void randomChump(std::string name)
{
	Zombie *ptr;
	ptr = new Zombie(name);
	delete ptr;
}