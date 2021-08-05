#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	Weapon	club1("crude spiked club");
	HumanA	bob("Bob", club1);
	bob.attack();
	club1.setType("some other type of club");
	bob.attack();

	Weapon	club2("crude spiked club");
	HumanA	jonh("Jonh", club2);
	jonh.attack();
	club2.setType("some other type of club");
	jonh.attack();
}