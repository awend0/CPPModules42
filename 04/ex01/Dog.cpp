#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog desctructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->_type = other._type;
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "<Dog>: woof woof woof" << std::endl;
}
