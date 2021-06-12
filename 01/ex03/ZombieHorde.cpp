#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(std::string type, int size)
{
	if (size <= 0)
		std::cout << "Wrong amount of zombies T_T" << std::endl;
	else
	{
		this->_zombies = new Zombie[size];
		this->_type = type;
		this->_size = size;
		for (int i = 0; i < size; i++)
			this->_zombies[i].set(this->_zombies[i].randomName(10), type);
	}
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << this->_type << " horde is going to be destructed" << std::endl;
	delete[] (this->_zombies);
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_size; i++)
		this->_zombies[i].announce();
}
