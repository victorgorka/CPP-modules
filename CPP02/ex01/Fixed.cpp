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
	_rawBits = roundf(f * (1 << _fracc));
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




// Methods
int	Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_rawBits /( 1 <<_fracc));
}

int		Fixed::toInt( void) const
{
	return (_rawBits >> _fracc);
}

// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Assignation operator called\n";
	this->setRawBits(assign.getRawBits());
	return *this;
}

std::ostream & operator<<(std::ostream &os, const Fixed &fix)
{
	os << fix.toFloat();
	return(os);
}
