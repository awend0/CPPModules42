#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		~Point(void);
		Point(const Point &other);
		Point(const float x, const float y);
		
		Point &operator=(const Point &other);

		const Fixed getX() const;
		const Fixed getY() const;
	private:
		const Fixed _x, _y;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif