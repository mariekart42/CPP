#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
    _name(name),
    _weapon(weapon)
{}
HumanA::~HumanA() {}

void HumanA::attack(void)
{
    std::cout << "\033[35m" << _name << "\033[0m attacks with \033[35m" << _weapon.getType() <<"\033[0m" <<std::endl;
}