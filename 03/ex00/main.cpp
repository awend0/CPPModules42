#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("CL4P-TP");

	clap.attack("FR4G-TP");
	clap.takeDamage(5);
	clap.beRepaired(20);
	clap.takeDamage(24);
	clap.takeDamage(5);
	clap.beRepaired(20);
	clap.attack("FR4G-TP");
}