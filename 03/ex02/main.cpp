
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	trap1("Fraggy");

	trap1.attack("Evil Fraggy");
	trap1.takeDamage(5);
	trap1.beRepaired(5);
	trap1.takeDamage(1000);
	trap1.takeDamage(10);
	trap1.status();
	trap1.attack("Evil Fraggy");

	FragTrap 	trap2(trap1);
	trap2.status();
	trap2.beRepaired(19);

	FragTrap	trap3("ScAvenger");
	trap3.highFiveGuys();

	FragTrap	unnamed;
}