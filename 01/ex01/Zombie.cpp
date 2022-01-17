#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << "> Destructed" << std::endl;
}