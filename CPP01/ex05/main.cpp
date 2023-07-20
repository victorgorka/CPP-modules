#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(void)
{
	Harl harl = Harl();
	std::string	nb;

	std::cout << "1. DEBUG\n2. INFO\n3. WARNING\n4. ERROR\n";
	std::getline(std::cin, nb);
	harl.complain(nb);
}