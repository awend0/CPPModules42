#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(0)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void)
{
    if (!this->_weapon)
        std::cout << this->_name << " is unarmed" << std::endl;
    else
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}