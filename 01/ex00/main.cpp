#include "Zombie.hpp"

Zombie *foo(void)
{
	Zombie *createdInNewZombie = newZombie("createdInNewZombie");
	createdInNewZombie->announce();
	return (createdInNewZombie);
}

int main(void)
{
	Zombie createdInMain("CreatedInMain");
	createdInMain.announce();
	randomChump("createdInRandomChump");
	Zombie *createdInNewZombie = foo();
	std::cout << "foo() ended" << std::endl;
	delete createdInNewZombie; 
	return (0);
}