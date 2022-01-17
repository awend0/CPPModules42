#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("SC4V-TP");

	scav.guardGate();
	scav.attack("FR4G-TP");
	scav.takeDamage(20);
	scav.beRepaired(20);
	scav.takeDamage(99);
	scav.takeDamage(2);
	scav.guardGate();
}