#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		
		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _nrgpoints;
		unsigned int _dmg;
};

#endif