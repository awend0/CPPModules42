#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
    std::cout << "WrongAnimal w/ type constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal desctructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    this->_type = other._type;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "* META ANIMAL TALKING *" << std::endl;
}
