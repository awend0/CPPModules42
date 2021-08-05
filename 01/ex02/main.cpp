#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	stackZombies(int amount)
{
	Zombie	stackTeam1[amount];
	Zombie	stackTeam2[amount];

	std::cout << "Meet the Stack Team One!:" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		stackTeam1[i].set(stackTeam1[i].randomName(10), "Stack Team One");
		stackTeam1[i].announce();
	}
	std::cout << "Meet the Stack Team Two!:" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		stackTeam2[i].set(stackTeam1[i].randomName(10), "Stack Team Two");
		stackTeam2[i].announce();
	}
	std::cout << "Well, they're leaving the Arena too." << std::endl;
}

int     main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./a.out <zombie_amount>" << std::endl;
		exit(0);
	}
	int			amount = atoi(argv[1]);
	ZombieEvent team1_event;
	ZombieEvent team2_event;
	Zombie 		*team1[amount];
	Zombie 		*team2[amount];

	team1_event.setZombieType("Heap Team One");
	team2_event.setZombieType("Heap Team Two");
	std::cout << "Heap Team One arriving to the Arena!" << std::endl;
	for (int i = 0; i < amount; i++)
		team1[i] = team1_event.randomChump();
	std::cout << "Heap Team Two arriving to the Arena!" << std::endl;
	for (int i = 0; i < amount; i++)
		team2[i] = team2_event.randomChump();
	std::cout << "Tech. issues, wrong zombies arrived, they are leaving the Arena :(" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		delete (team1[i]);
		delete (team2[i]);
	}
	stackZombies(amount);
}