#include "Zombie.hpp"

int	main(void)
{
	Zombie zz = Zombie("pepe");
	Zombie *pzz = new Zombie("Pepe2");

	zz.announce();
	pzz->announce();
	randomChump("paco");
	randomChump("foo");
	delete pzz;
	return (0);
}
