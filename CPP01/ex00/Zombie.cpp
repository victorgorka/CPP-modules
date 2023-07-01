#include "Zombie.hpp"

void	Zombie::announce(void){std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << std::endl;
}