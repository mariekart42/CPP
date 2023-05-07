#include "zombie.hpp"

Zombie::Zombie()
{
	name = "pissnelke";
	announce();
}
Zombie::Zombie(std::string name_)
{
	name = name_;
	announce();
}
Zombie::~Zombie() {}