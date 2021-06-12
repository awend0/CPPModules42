#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
