#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat desctructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    WrongAnimal::operator=(other);
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "<WrongCat>: meooow" << std::endl;
}
