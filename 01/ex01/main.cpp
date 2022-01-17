#include "Zombie.hpp"

int main(void)
{
	int size = 10;

	Zombie *horde = zombieHorde(size, "dudeInAHorde");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;
}