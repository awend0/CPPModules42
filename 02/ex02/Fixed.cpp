#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0)
{
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const float val) : _val((int)(roundf(val * (1 << this->_bits))))
{
}

Fixed::Fixed(const int val) : _val(val << this->_bits)
{
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->_val = other._val;
	return (*this);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed ret;
	ret.setRawBits(this->_val + other._val);
	return ret;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed ret;
	ret.setRawBits(this->_val - other._val);
	return ret;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed ret;
    ret.setRawBits((this->_val * other.getRawBits()) >> this->_bits);
    return ret;
	
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed ret;
    ret.setRawBits((this->_val << this->_bits) / other._val);
    return ret;
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->_val == other._val);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->_val != other._val);
}

bool Fixed::operator< (const Fixed &other) const
{
	return (this->_val < other._val);
}

bool Fixed::operator> (const Fixed &other) const
{
	return (this->_val > other._val);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->_val <= other._val);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->_val >= other._val);
}

Fixed &Fixed::operator++()
{
	this->_val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed &Fixed::operator--()
{
	this->_val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

int Fixed::getRawBits(void) const
{
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