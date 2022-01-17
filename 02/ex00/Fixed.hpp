#pragma once
#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed &other);

		Fixed &operator=(Fixed &other);

		int getRawBits(void) const;
		void setRawBits(const int raw);
	private:
		const static int _bits = 8;
		int _val;
};