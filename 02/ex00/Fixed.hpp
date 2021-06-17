#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();

		void setRawBits(const int raw);
		int getRawBits(void) const;

		Fixed &operator=(const Fixed &other);
	private:
		int _value;
		static const int _fractional_bits = 8;
};

#endif