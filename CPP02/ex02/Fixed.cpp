#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(const int n)
{
	_rawBits = n << _fracc;
}

Fixed::Fixed(const float f)
{
	_rawBits = roundf(f * (1 << _fracc));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}


// Destructor
Fixed::~Fixed()
{
}

// Methods
int				Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void			Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

float			Fixed::toFloat( void ) const
{
	return ((float)_rawBits /( 1 <<_fracc));
}

int				Fixed::toInt( void) const
{
	return (_rawBits >> _fracc);
}

Fixed		&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1._rawBits < f2._rawBits)
		return f1;
	return f2;
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1._rawBits < f2._rawBits)
		return f1;
	return f2;
}

Fixed		&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1._rawBits > f2._rawBits)
		return f1;
	return f2;
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1._rawBits > f2._rawBits)
		return f1;
	return f2;
}

// Operators
Fixed &Fixed::operator=(const Fixed &assign)
{
	this->setRawBits(assign.getRawBits());
	return *this;
}

std::ostream & operator<<(std::ostream &os, const Fixed &fix)
{
	os << fix.toFloat();
	return(os);
}

bool Fixed::operator>(const Fixed &f2)
{
	if (this->_rawBits > f2._rawBits)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &f2)
{
	if (this->_rawBits < f2._rawBits)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &f2)
{
		if (this->_rawBits >= f2._rawBits)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &f2)
{
		if (this->_rawBits <= f2._rawBits)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &f2)
{
		if (this->_rawBits == f2._rawBits)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &f2)
{
		if (this->_rawBits != f2._rawBits)
		return (true);
	return (false);
}

Fixed &Fixed::operator+(const Fixed &f2)
{
	this->_rawBits += f2._rawBits;

	return (*this);
}

Fixed &Fixed::operator-(const Fixed &f2)
{
	this->_rawBits -= f2._rawBits;

	return (*this);
}

Fixed &Fixed::operator*(const Fixed &f2)
{
	this->_rawBits = (this->_rawBits * f2._rawBits) >> _fracc;

	return (*this);
}
		
Fixed &Fixed::operator/(const Fixed &f2)
{
	this->_rawBits = ((float)this->_rawBits / f2._rawBits) * (1 << _fracc);
	return *this;
}

Fixed &Fixed::operator++()
{
	this->_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed res = *this;

	_rawBits++;
	return (res);
}

