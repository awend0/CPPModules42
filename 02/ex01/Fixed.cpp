#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float val) : _val((int)(roundf(val * (1 << this->_bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int val) : _val(val << this->_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_val = other._val;
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

float Fixed::toFloat(void) const
{
	return ((float)this->_val / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (this->_val >> this->_bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}