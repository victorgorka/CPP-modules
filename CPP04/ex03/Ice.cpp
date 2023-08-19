#include "Ice.hpp"
#include "AMateria.hpp"

// Constructors
Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &copy)
{
	(void) copy;
}


// Destructor
Ice::~Ice()
{
}

// Methods
AMateria *Ice::clone()
{
	AMateria *cure = new Ice();
	return cure;
}

// void Ice::use(ICharacter& target)
// {
// 	std::cout << "* heals " << target.getName() <<"'s wounds *\n";
// }

// Operators
Ice & Ice::operator=(const Ice &assign)
{
	this->_type =  assign._type;
	return *this;
}

