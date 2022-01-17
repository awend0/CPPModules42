#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("DI4MOND-TP");

	diamond.whoAmI();
	diamond.attack("SC4V-TP");
	diamond.takeDamage(20);
	diamond.beRepaired(20);
	diamond.takeDamage(99);
	diamond.takeDamage(2);
	diamond.whoAmI();
}