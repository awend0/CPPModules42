#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat::~Cat(void)
{
    std::cout << "Cat desctructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "<Cat>: meooow" << std::endl;
}
