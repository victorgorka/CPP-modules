#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	_rawBits = n << _fracc;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called\n";
	_rawBits = roundf(f);
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

Fixed & Fixed::operator<<(const Fixed )

// Methods
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

float	toFloat( void )
{

}

int		toint( void)
{

}