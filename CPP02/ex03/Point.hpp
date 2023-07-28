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
		
	private:
		Fixed const _x;
		Fixed const _y;
		
};

#endif