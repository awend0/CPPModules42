#include "Pony.hpp"

Pony::Pony(std::string name, std::string color)
{
	this->_name = name;
	this->_color = color;
	std::cout << this->_name << " was constructed!" << std::endl;
}

Pony::~Pony()
{
	std::cout << this->_name << " was destructed :(" << std::endl;
}

void Pony::talk(void)
{
	std::cout	<< this->_name << ": Hi! My name is " << this->_name
				<< " and my color is " << this->_color << "!" << std::endl;
}