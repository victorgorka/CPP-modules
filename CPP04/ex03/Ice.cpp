#include "Ice.hpp"
#include "AMateria.hpp"

// Constructors
Ice::Ice()
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}


// Destructor
Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}

// Methods
AMateria *Ice::clone()
{
	AMateria *cure = new Ice();
	return cure;
}

// Operators
Ice & Ice::operator=(const Ice &assign)
{
	this->_type =  assign._type;
	return *this;
}

