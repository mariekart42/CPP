#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}
Weapon::~Weapon() {}

const std::string &Weapon::getType(void) const
{
    const std::string &REF = this->_type;
    return (REF);
}

void Weapon::setType(const std::string &type)
{
    this->_type = type;
}