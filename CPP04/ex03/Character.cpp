#include "Character.hpp"

// Constructors
Character::Character()
{
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
	this->_name = "unnamed";
}

Character::Character(const Character &copy)
{
	this->_name = copy._name;
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
}


// Destructor
Character::~Character()
{
	std::cout << "\e[0;31mDestructor called of Character\e[0m" << std::endl;
}

// Methods
std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}

// Operators
Character & Character::operator=(const Character &assign)
{
	(void) assign;
	return *this;
}

