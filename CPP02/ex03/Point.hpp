#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point();
		Point(const float, const float);
		Point(const Point &copy);

		// Destructor
		~Point();

		// Operators
		Point & operator=(const Point &assign);

		// Methods
		float	getX() const;
		float	getY() const;

	private:
		Fixed const _x;
		Fixed const _y;
		
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
#endif