#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class   HumanB
{
	public:
		HumanB(std::string name, Weapon &weapon);
		~HumanB(void);
		void    attack(void);

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif