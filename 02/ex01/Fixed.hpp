#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &other);
		Fixed(const int val);
		Fixed(const float val);

		Fixed &operator=(const Fixed &other);

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(const int raw);
	private:
		const static int _bits = 8;
		int _val;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);