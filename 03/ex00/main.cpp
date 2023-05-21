#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	trap1("Clappy");

	trap1.attack("Dark Clappy");
	trap1.takeDamage(5);
	trap1.beRepaired(5);
	trap1.takeDamage(10);
	trap1.status();
	trap1.attack("Dark Clappy");

	ClapTrap	trap2(trap1);
	trap2.status();
	trap2.beRepaired(19);
}