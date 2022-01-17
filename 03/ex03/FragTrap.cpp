#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_nrgpoints = 100;
	this->_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;

	std::cout << "FragTrap <" << this->_name <<"> copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_nrgpoints = other._nrgpoints;
	this->_dmg = other._dmg;

	std::cout << "FragTrap <" << this->_name <<"> assignation called" << std::endl;

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << this->_name <<"> destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hitpoints > 0)
		std::cout << "FragTrap <" << this->_name <<">: \"Guys, high five?\"" << std::endl;
}