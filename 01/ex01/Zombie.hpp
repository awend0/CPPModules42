#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		void announce(void);
		void set_name(std::string name);
		Zombie();
		Zombie(std::string name);
		~Zombie();
	private:
		std::string _name; 
};

Zombie* zombieHorde(int N, std::string name);

#endif