#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl = Harl();
	std::string	lvl;

	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return 0;
	}
	lvl = argv[1];
	harl.complain(lvl);
}
