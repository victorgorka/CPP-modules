#include "Weapon.hpp"
#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
}


HumanB::HumanB(std::string name) { _name = name; }