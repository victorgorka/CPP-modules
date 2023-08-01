#include <iostream>
#include "Point.hpp"
#include <cmath>

float	area(Point const &x, Point const &y, Point const &z)
{
	return abs((x.getX() * (y.getY() - z.getY()) + y.getX() * (z.getY() - x.getY())
		+ z.getX() * (x.getY() - y.getY())) / 2);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	abc, pab, pbc, pac;

	abc = area(a, b, c);
	pab = area(point, a, b);
	pbc = area(point, b, c);
	pac = area(point, a, c);

	if (pab == 0 || pbc == 0 || pac == 0)
		return false;
	else if (pab + pbc + pac == abc)
		return true;
	else
		return false;
}

int main( void ) {
	{
		Point a(0.0f, 0.0f), b(10.0f, 30.0f), c(20.0f, 0.0f), p(2.24f, 0.01f);

		if(bsp(a, b, c, p) == true)
			std::cout << "The point is inside ;)\n";
		else
			std::cout << "The point is not inside\n";
	}
	{
		Point a(0.0f, 0.0f), b(10.0f, 30.0f), c(20.0f, 0.0f), p(-2.24f, 0.01f);

		if(bsp(a, b, c, p) == true)
			std::cout << "The point is inside ;)\n";
		else
			std::cout << "The point is not inside\n";
	}
	{
		Point a(0.0f, 0.0f), b(10.0f, 30.0f), c(20.0f, 0.0f), p(2.24f, 0.00f);

		if(bsp(a, b, c, p) == true)
			std::cout << "The point is inside ;)\n";
		else
			std::cout << "The point is not inside\n";
	}
	{
		Point a(0.0f, 0.0f), b(10.0f, 30.0f), c(20.0f, 0.0f), p(10.0f, 30.00f);

		if(bsp(a, b, c, p) == true)
			std::cout << "The point is inside ;)\n";
		else
			std::cout << "The point is not inside\n";
	}
	return 0;
}
