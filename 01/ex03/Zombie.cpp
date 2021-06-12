#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>  Destructed" << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void	Zombie::set(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>  Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::randomName(int len)
{
    auto& chrs =	"abcdefghijklmnopqrstuvwxyz"
						"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::mt19937 rg{std::random_device{}()};
	std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);
    std::string s;
    s.reserve(len);
    while(len--)
        s += chrs[pick(rg)];
    return s;
}