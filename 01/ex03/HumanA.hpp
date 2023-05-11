#pragma once
#include <iostream>

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        void attack(void);
        // HumanA();
        // pointer of name cause we could recieve an initialized string
        // address of weapon cause better performance
        HumanA(std::string name, Weapon&);
        ~HumanA();
        
};