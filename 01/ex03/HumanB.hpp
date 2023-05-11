#pragma once
#include <iostream>

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        void attack(void);
        
        // name pointer cause we could recieve an initialized string
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
};