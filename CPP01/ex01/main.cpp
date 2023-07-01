#include "Zombie.hpp"

int	main(void)
{
	Zombie *z = zombieHorde(7, "fernan");
	for (int i = 0; i < 7; i++)
		z[i].announce();
	delete [] z;
	return (0);
}
