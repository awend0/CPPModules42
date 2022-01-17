#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog::~Dog(void)
{
    std::cout << "Dog desctructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "<Dog>: woof woof woof" << std::endl;
}
