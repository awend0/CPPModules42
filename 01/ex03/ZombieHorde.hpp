#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(std::string type, int size);
		~ZombieHorde();
		void announce(void);
	private:
		int			_size;
		std::string	_type;
		Zombie		*_zombies;
};

#endif