#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed();

		void setRawBits(const int raw);
		int getRawBits(void) const;
		float toFloat(void) const;
		int toInt(void) const;

		Fixed &operator=(const Fixed &other);
	private:
		int _value;
		static const int _fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif