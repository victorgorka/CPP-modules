#include "Zombie.hpp"

void	Zombie::announce(void)				{std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";}

void	Zombie::setName(std::string name)	{_name = name;}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << _name << std::endl;
}