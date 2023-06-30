#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
// HUMAN A
    Weapon wep1 = Weapon("PICKEL");

    HumanA me("me", wep1);
    me.attack();
    wep1.setType("OTHER PICKEL");
    me.attack();

// HUMAN B
    Weapon wep2 = Weapon("THROW UP");
    Weapon wep3 = Weapon("SHOWER");

    HumanB you("you");
    you.setWeapon(wep2);
    you.attack();
    you.setWeapon(wep3);
    you.attack();
}