#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
}

AMateria::AMateria(const std::string &type) : _type(type)
{
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType(void) const
{
    return (this->_type);
}

void AMateria::use(ICharacter &)
{
    std::cout << "This string must be never shown" << std::endl;
}
