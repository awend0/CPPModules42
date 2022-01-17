#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &) : AMateria("ice")
{   
}

Ice::~Ice(void)
{
}

Ice &Ice::operator=(const Ice &)
{
    return (*this);
}

AMateria *Ice::clone(void) const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
