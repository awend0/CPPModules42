#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	srand(time(0));
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "";
	this->_cur_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_cur_nrgpoints = 100;
	this->_max_nrgpoints = 100;
	this->_level = 1;
	this->_melee_dmg = 30;
	this->_ranged_dmg = 20;
	this->_armor_reduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	srand(time(0));
	std::cout << "FragTrap with name constructor called" << std::endl;
	this->_name = name;
	this->_cur_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_cur_nrgpoints = 100;
	this->_max_nrgpoints = 100;
	this->_level = 1;
	this->_melee_dmg = 30;
	this->_ranged_dmg = 20;
	this->_armor_reduction = 5;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}


void FragTrap::rangedAttack(const std::string &target)
{
	if (this->_cur_hitpoints == 0)
	{
		std::cout << "FR4G-TP " << this->_name << " is currently lying ot the ground with 0 HP, he can't do anything :(" << std::endl;
		return ;
	}
	std::cout	<< "FR4G-TP " << this->_name
				<< " attacks " << target
				<< " at range, causing " << this->_ranged_dmg
				<< " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	if (this->_cur_hitpoints == 0)
	{
		std::cout << "FR4G-TP " << this->_name << " is currently lying ot the ground with 0 HP, he can't do anything :(" << std::endl;
		return ;
	}
	std::cout	<< "FR4G-TP " << this->_name
				<< " attacks " << target
				<< " at melee, causing " << this->_melee_dmg
				<< " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int dmg = amount - this->_armor_reduction;

	if (this->_armor_reduction > amount)
	{
		std::cout << "Someone tried to damage FR4G-TP " << this->_name << ", but his armor saves him!" << std::endl;
		return ;
 	}
	if (this->_cur_hitpoints == 0)
	{
		std::cout << "FR4G-TP " << this->_name << " is already dead :(" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->_name << " got " << dmg << " damage! ";
	if (this->_cur_hitpoints > dmg)
	{
		this->_cur_hitpoints -= dmg;
		std::cout << "Current HP: " << this->_cur_hitpoints << std::endl; 
	}
	else
	{
		std::cout << "He is destroyed :(" << std::endl;
		this->_cur_hitpoints = 0;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name << " got " << amount << " HP repair! ";
	this->_cur_hitpoints = std::min(this->_max_hitpoints, this->_cur_hitpoints + amount);
	std::cout << "Curent HP: " << this->_cur_hitpoints << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	static const std::string pool[] =
	{
		"FR4G-TP " + this->_name + " deploys a Holotrap, becomes invisible and shoots",
		"FR4G-TP " + this->_name + " summons a Sirentrap emitting an acid gas and with fire wings on its back",
		"FR4G-TP " + this->_name + " will continually bounce into the air and shoot",
		"FR4G-TP " + this->_name + " Claptrap throws out a Turrettrap that shoots explosive rockets",
		"A disco ball floats above FR4G-TP " + this->_name + "'s head, constantly shooting lasers"
	};

	if (this->_cur_hitpoints == 0)
	{
		std::cout << "FR4G-TP " << this->_name << " is currently lying ot the ground with 0 HP, he can't do anything :(" << std::endl;
		return ;
	}
	if (this->_cur_nrgpoints < 25)
	{
		std::cout << "FR4G-TP " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << pool[rand() % 5] << ", causing " << (rand() % this->_ranged_dmg) + 1 << " damage to " << target << "!" << std::endl;
	this->_cur_nrgpoints = std::max(0u, this->_cur_nrgpoints - 25);
}