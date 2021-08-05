#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap frag("Fragtrap");
	ScavTrap scav("Scavtrap");

	for (size_t i = 0; i < 5; i++)
	{
		if (rand() % 2)
			frag.meleeAttack("CL4P-TP");
		else
			frag.rangedAttack("CL4P-TP");

		if (rand() % 2)
			scav.meleeAttack("CL4P-TP");
		else
			scav.rangedAttack("CL4P-TP");
	}

	std::cout << std::endl << std::endl;

	for (size_t i = 0; i < 5; i++)
	{
		if (rand() % 2)
			frag.takeDamage(rand() % 100 + 1);
		else
			frag.beRepaired(rand() % 100 + 1);

		if (rand() % 2)
			scav.takeDamage(rand() % 100 + 1);
		else
			scav.beRepaired(rand() % 100 + 1);
	}
	
	std::cout << std::endl << std::endl;
	
	for (size_t i = 0; i < 7; i++)
	{
		frag.vaulthunter_dot_exe("CL4P-TP");
		scav.challengeNewcomer();
	}
}