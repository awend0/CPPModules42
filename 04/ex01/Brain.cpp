#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
    for (size_t i = 0; i < 100; i++)
        this->_ideas[i] = "idea" + SSTR(i);
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain::~Brain(void)
{
    std::cout << "Brain desctructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    for(size_t i = 0; i < 100; i++)
        this->_ideas[i] = other._ideas[i];
    return (*this);
}
