#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point &other) : _x(other._x), _y(other._y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &other)
{
    (void)other._x;
	return (*this);
}

const Fixed Point::getX() const
{
	return (this->_x);
}

const Fixed Point::getY() const
{
	return (this->_y);
}

static Fixed area(Point a, Point b, Point c)
{
    Fixed ret = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / Fixed(2.0f);
    if (ret < 0)
        ret = ret * -1;
    return (ret);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    // https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/
    Fixed A = area(a, b, c);
    Fixed A1 = area(point, b, c);
    Fixed A2 = area(a, point, c);
    Fixed A3 = area(a, b, point);

    if (A1.getRawBits() == 0 || A2.getRawBits() == 0 || A3.getRawBits() == 0) // Edge || Vertex check
        return (false);
    return (A == A1 + A2 + A3);
}