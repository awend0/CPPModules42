#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include <iostream>

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap(std::string name);

		DiamondTrap &operator=(const DiamondTrap &other);

		void whoAmI(void);
	private:
		std::string _name;
};

#endif