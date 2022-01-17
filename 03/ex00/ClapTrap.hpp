#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap(std::string _name);

		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _nrgpoints;
		unsigned int _dmg;
};

#endif