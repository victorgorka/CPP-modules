#include "Character.hpp"

// Constructors
Character::Character()
{
	this->_name = "unnamed";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i] == NULL)
			this->_inventory[i] = NULL;
		else
			this->_inventory[i] = copy._inventory[i]->clone();
	}
	this->_name = copy._name;
}


// Destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

// Methods
std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			// std::cout << this->_name << " equips " << m->getType() << " index: " << i << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		// std::cout << _name << " unequiped " << _inventory[idx]->getType()
		// 			<< " idx: " << idx << std::endl;
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

// void Character::printInv(void)
// {
// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (_inventory[i] != NULL && _inventory[i]->getType() == "ice")
// 			std::cout << _name << ": ice" << " idx: " << i << std::endl;
// 		else if (_inventory[i] != NULL && _inventory[i]->getType() == "cure")
// 			std::cout << _name << ": cure" << " idx: " << i << std::endl;
// 	}
// }

// Operators
Character & Character::operator=(const Character &assign)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		if (assign._inventory[i] != NULL)
			this->_inventory[i] = assign._inventory[i]->clone();
		else if (assign._inventory[i] == NULL)
			this->_inventory[i] = NULL;
	}
	this->_name = assign._name;
	return *this;
}

