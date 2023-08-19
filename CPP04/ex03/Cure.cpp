#include "Cure.hpp"
#include "AMateria.hpp"

// Constructors
Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(const Cure &copy)
{
	(void) copy;
}


// Destructor
Cure::~Cure()
{
}

// Methods
AMateria *Cure::clone()
{
	AMateria *cure = new Cure();
	return cure;
}

// void Cure::use(ICharacter& target)
// {
// 	std::cout << "* shoots an ice bolt at " << target.getName() <<" *\n";
// }

// Operators
Cure & Cure::operator=(const Cure &assign)
{
	this->_type =  assign._type;
	return *this;
}
