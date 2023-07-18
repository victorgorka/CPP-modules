#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->weapon = &weapon;
}
