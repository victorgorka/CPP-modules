#include "Ice.hpp"

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


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	return *this;
}

