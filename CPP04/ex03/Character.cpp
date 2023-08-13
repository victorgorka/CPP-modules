#include "Character.hpp"

// Constructors
Character::Character()
{
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
	this->_name = "unnamed";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
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
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
			*_inventory[i] = *m;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx] = NULL;
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

