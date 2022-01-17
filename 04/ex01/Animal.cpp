#include "Animal.hpp"

Animal::Animal(void) : _type("")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
    std::cout << "Animal w/ type constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal desctructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    this->_type = other._type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound(void) const
{
    std::cout << "* META ANIMAL TALKING *" << std::endl;
}
