#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("FR4G-TP");

	frag.highFivesGuys();
	frag.attack("SC4V-TP");
	frag.takeDamage(20);
	frag.beRepaired(20);
	frag.takeDamage(99);
	frag.takeDamage(2);
	frag.highFivesGuys();
}