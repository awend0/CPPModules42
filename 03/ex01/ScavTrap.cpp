#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	srand(time(0));
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "";
	this->_cur_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_cur_nrgpoints = 50;
	this->_max_nrgpoints = 50;
	this->_level = 1;
	this->_melee_dmg = 20;
	this->_ranged_dmg = 15;
	this->_armor_reduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	srand(time(0));
	std::cout << "ScavTrap with name constructor called" << std::endl;
	this->_name = name;
	this->_cur_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_cur_nrgpoints = 50;
	this->_max_nrgpoints = 50;
	this->_level = 1;
	this->_melee_dmg = 20;
	this->_ranged_dmg = 15;
	this->_armor_reduction = 3;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target)
{
	if (this->_cur_hitpoints == 0)
	{
		std::cout << "SC4V-TP " << this->_name << " is currently lying ot the ground with 0 HP, he can't do anything :(" << std::endl;
		return ;
	}
	std::cout	<< "SC4V-TP " << this->_name
				<< " attacks " << target
				<< " at range, causing " << this->_ranged_dmg
				<< " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	if (this->_cur_hitpoints == 0)
	{
		std::cout << "SC4V-TP " << this->_name << " is currently lying ot the ground with 0 HP, he can't do anything :(" << std::endl;
		return ;
	}
	std::cout	<< "SC4V-TP " << this->_name
				<< " attacks " << target
				<< " at melee, causing " << this->_melee_dmg
				<< " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int dmg = amount - this->_armor_reduction;

	if (this->_armor_reduction > amount)
	{
		std::cout << "Someone tried to damage SC4V-TP " << this->_name << ", but his armor saves him!" << std::endl;
		return ;
 	}
	if (this->_cur_hitpoints == 0)
	{
		std::cout << "SC4V-TP " << this->_name << " is already dead :(" << std::endl;
		return ;
	}
	std::cout << "SC4V-TP " << this->_name << " got " << dmg << " damage! ";
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

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP " << this->_name << " got " << amount << " HP repair! ";
	this->_cur_hitpoints = std::min(this->_max_hitpoints, this->_cur_hitpoints + amount);
	std::cout << "Curent HP: " << this->_cur_hitpoints << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	static const std::string pool[] =
	{
		"Win a duel without taking damage",
		"Reach the end of each of the larger challenges in all 3 coliseums with one character",
		"Kill the Vault Boss",
		"Kill an enemy by stomping on its head",
		"Actually kill Ned"
	};
	std::cout << "SC4V-TP " << this->_name << ": \"Can you " << pool[rand() % 5] << "? I bet no...\"" << std::endl;
}