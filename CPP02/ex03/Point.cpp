#include "Point.hpp"

// Constructors
Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2)
{
}

Point::Point(const Point &copy)
{
	*this = copy;
}


// Destructor
Point::~Point()
{
}


// Operators
Point & Point::operator=(const Point &assign)
{
	(void) assign;
	return *this;
}
