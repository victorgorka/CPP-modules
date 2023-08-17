#include "Cure.hpp"
#include "AMateria.hpp"

// Constructors
Cure::Cure()
{
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}


// Destructor
Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
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
