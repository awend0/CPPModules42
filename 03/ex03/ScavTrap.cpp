#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_nrgpoints = 50;
	this->_dmg = 20;
	this->_name = name;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;

	std::cout << "ScavTrap <" << this->_name <<"> copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_nrgpoints = other._nrgpoints;
	this->_dmg = other._dmg;

	std::cout << "ScavTrap <" << this->_name <<"> assignation called" << std::endl;

	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << this->_name <<"> destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_hitpoints > 0)
		std::cout << "ScavTrap <" << this->_name <<"> have enterred in Gate keeper mode" << std::endl;
}