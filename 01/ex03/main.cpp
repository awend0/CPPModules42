#include "ZombieHorde.hpp"

int     main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./a.out <zombie_amount>" << std::endl;
		exit(0);
	}
	int			amount = atoi(argv[1]);
	std::cout << "Meet Horde One!:" << std::endl;
	ZombieHorde hordeOne("Horde One", amount);
	hordeOne.announce();
	std::cout << "They are leaving" << std::endl;
}