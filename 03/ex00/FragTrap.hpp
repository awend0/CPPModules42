#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
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