#include "PhoneBook.hpp"
#include <iostream>

int		ftCheckCmd(std::string cmd, int *idx, PhoneBook *pb)
{
	std::string	add = "ADD";
	std::string	search = "SEARCH";
	std::string	exit = "EXIT";

	if (add.compare(cmd) == 0)
	{
		pb->ftAdd(*idx);
		return (1);
	}
	else if (search.compare(cmd) == 0)
	{
		pb->ftAdd(*idx);
		return (1);
	}
	else if (exit.compare(cmd) == 0)
		return (0);
	else
		return (1);
}

void	ftInOut(PhoneBook *pb, int *idx)
{
	std::string	cmd;

	do
	{
		std::cout << "Enter any of the following commands:\n";
		std::cout << "\t- ADD\n\t- SEARCH\n\t- EXIT\n";
		std::getline(std::cin, cmd);
	} while (ftCheckCmd(cmd, idx, pb));
}

int	main(void)
{
	PhoneBook pb;
	static int	idx = 0;

	ftInOut(&pb, &idx);
	return (0);
}