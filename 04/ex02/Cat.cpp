#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_type = other._type;
    this->_brain = new Brain(*other._brain);
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat desctructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->_type = other._type;
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "<Cat>: meooow" << std::endl;
}
