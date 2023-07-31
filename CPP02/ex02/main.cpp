#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a = "<< a << std::endl;

	Fixed h( Fixed( 10.5f ) / Fixed( 2 ) );
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed z( Fixed( 10.5f ) + Fixed( 2 ) );
	Fixed y( Fixed( 10.5f ) - Fixed( 2 ) );

	std::cout << std::endl;
	std::cout << "h = 10.5 / 2 = " << h << std::endl;
	std::cout << "h + a =  " << h + a << std::endl;
	std::cout << "h + h =  " << h + h << std::endl;
	std::cout << "b = 5.05 * 2 = " << b << std::endl;
	std::cout << "b + h " << b + h << std::endl;
	std::cout << "z = 10.5 + 2 = " << z << std::endl;
	std::cout << "y = 10.5 - 2 = " << y << std::endl;

	std::cout << "max a b: " <<Fixed::max( a, b ) << std::endl;
	std::cout << "min a b: " <<Fixed::min( a, b ) << std::endl;
	
	return 0;
}
