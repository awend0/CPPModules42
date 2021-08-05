#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("Fragtrap");

	for (size_t i = 0; i < 5; i++)
	{
		if (rand() % 2)
			frag.meleeAttack("CL4P-TP");
		else
			frag.rangedAttack("CL4P-TP");
	}
	for (size_t i = 0; i < 5; i++)
	{
		if (rand() % 2)
			frag.takeDamage(rand() % 100 + 1);
		else
			frag.beRepaired(rand() % 100 + 1);
	}
	for (size_t i = 0; i < 7; i++)
		frag.vaulthunter_dot_exe("CL4P-TP");
}