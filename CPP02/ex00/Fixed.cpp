#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}


// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Assignation operator called\n";
	this->setRawBits(assign.getRawBits());
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	rawBits = raw;
}