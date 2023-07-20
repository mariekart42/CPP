#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	trap1("Scavster");

	trap1.attack("Evil Scavver");
	trap1.status();
	trap1.takeDamage(5);
	trap1.beRepaired(5);
	trap1.takeDamage(100);
	trap1.takeDamage(10);
	trap1.status();
	trap1.attack("Evil Scavver");

	ScavTrap 	trap2(trap1);
	trap2.status();
	trap2.beRepaired(19);

	ScavTrap	trap3("ScAvenger");
	trap3.guardGate();

	ScavTrap	unnamed;
}