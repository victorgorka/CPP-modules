#include "Point.hpp"

// Constructors
Point::Point() : _x(0), _y(0)
{
}

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY())
{
}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2)
{
}

// Destructor
Point::~Point()
{
}

// Mmethods
float	Point::getX() const
{
	return _x.toFloat();
}

float	Point::getY() const
{
	return _y.toFloat();
}

// Operators
Point & Point::operator=(const Point &assign)
{
	(void) assign;
	return *this;
}
