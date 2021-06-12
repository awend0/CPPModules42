#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "";
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*ret = new Zombie(name, this->_type);

	return (ret);
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie		*ret;

	ret = new Zombie();
	srand(time(0));
	ret->set(ret->randomName(10), this->_type);
	ret->announce();
	return (ret);
}