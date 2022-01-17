#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitpoints(10), _nrgpoints(10), _dmg(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _nrgpoints(10), _dmg(0)
{
	std::cout << "ClapTrap <" << name << "> name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << this->_name <<"> destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap <" << this->_name <<"> copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap <" << this->_name <<"> assignation called" << std::endl;
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_nrgpoints = other._nrgpoints;
	this->_dmg = other._dmg;

	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitpoints > 0)
	{
		std::cout << "ClapTrap <" << this->_name << "> attack <" << target << ">, causing <" << this->_dmg << "> points of damage!" << std::endl;
		this->_nrgpoints -= 5;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints > 0)
	{
		std::cout << "ClapTrap <" << this->_name << "> was attacked on <" << amount << "> dmg ,";
		if (this->_hitpoints > amount)
		{
			this->_hitpoints -= amount;
			std::cout << " current HP: " << this->_hitpoints << std::endl;
			return ;
		}
		std::cout << " he is dead :(" << std::endl;
		this->_hitpoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints > 0)
	{
		this->_hitpoints += amount;
		std::cout << "ClapTrap <" << this->_name << "> was repaired on <" << amount << "> HP, current HP: " << this->_hitpoints << std::endl;
	}
}
