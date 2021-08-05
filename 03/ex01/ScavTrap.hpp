#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        void challengeNewcomer(void);
	private:
		std::string _name;
		unsigned int _cur_hitpoints;
		unsigned int _max_hitpoints;
		unsigned int _cur_nrgpoints;
		unsigned int _max_nrgpoints;
		unsigned int _level;
		unsigned int _melee_dmg;
		unsigned int _ranged_dmg;
		unsigned int _armor_reduction;
};

#endif