#include "ICharacter.hpp"

// Constructors
ICharacter::ICharacter()
{
	std::cout << "\e[0;33mDefault Constructor called of ICharacter\e[0m" << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ICharacter\e[0m" << std::endl;
}


// Destructor
ICharacter::~ICharacter()
{
}


// Operators
ICharacter & ICharacter::operator=(const ICharacter &assign)
{
	(void) assign;
	return *this;
}

