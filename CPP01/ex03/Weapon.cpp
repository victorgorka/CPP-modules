#include "Weapon.hpp"

std::string	&Weapon::getType() { return (_type); }
void		Weapon::setType(std::string newType) { _type = newType; }

Weapon::Weapon(std::string weapon) { _type = weapon; }