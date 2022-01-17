#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &) : AMateria("cure")
{   
}

Cure::~Cure(void)
{
}

Cure &Cure::operator=(const Cure &)
{
    return (*this);
}

AMateria *Cure::clone(void) const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
