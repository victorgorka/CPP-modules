#include <iostream>
#include "Point.hpp"

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
