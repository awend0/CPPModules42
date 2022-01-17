#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap <" << this->_name <<"> destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_nrgpoints = ScavTrap::_nrgpoints;
	this->_dmg = ScavTrap::_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
	std::cout << "DiamondTrap <" << this->_name <<"> copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_nrgpoints = other._nrgpoints;
	this->_dmg = other._dmg;

	std::cout << "DiamondTrap <" << this->_name <<"> assignation called" << std::endl;

	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	if (this->_hitpoints > 0)
		std::cout << "DiamondTrap <" << this->_name <<">: my ClapTrap::_name = " << this->ClapTrap::_name << std::endl;
}