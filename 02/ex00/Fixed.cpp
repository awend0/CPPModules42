#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_val = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void Fixed::setRawBits(const int raw)
{
	this->_val = raw;
}