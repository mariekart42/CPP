#pragma once
#include <iostream>

class Weapon
{
    private:
        std::string _type;
    
    public:
        const std::string &getType (void) const;  //last const makes sure function cant get called on not const type instances of weapon class
        //taking reference of a string performs better then receiving a copy -> creates no copies
        void setType(const std::string &type);

        Weapon(const std::string type);
        ~Weapon(void);
        void setWeapon(Weapon &);
};