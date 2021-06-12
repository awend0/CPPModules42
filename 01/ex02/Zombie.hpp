#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <random>
# include <chrono>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		~Zombie();
		void		announce(void);
		std::string	randomName(int len);
		void		set(std::string name, std::string type);
	private:
		std::string _name;
		std::string _type;

};

#endif