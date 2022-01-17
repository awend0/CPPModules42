#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie heapDude(name);

	heapDude.announce();
}