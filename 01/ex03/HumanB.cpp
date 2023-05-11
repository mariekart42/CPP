#include "HumanB.hpp"

HumanB::HumanB(std::string name):
    _name(name),
    _weapon(NULL)
{}
HumanB::~HumanB() {}

void HumanB::attack(void)
{
    std::cout << "\033[36m" << _name << "\033[0m attacks with \033[36m" << _weapon->getType() <<"\033[0m"<< std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}