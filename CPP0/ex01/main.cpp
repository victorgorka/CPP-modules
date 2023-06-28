#include "PhoneBook.hpp"
#include <iostream>

int		ftCheckCmd(std::string cmd, PhoneBook *agenda)
{
	std::string	add = "ADD";
	std::string	search = "SEARCH";
	std::string	exit = "EXIT";

	if (add.compare(cmd) == 0)
	{
		agenda->addContact();
		return (1);
	}
	else if (search.compare(cmd) == 0)
	{
		agenda->searchContact();
		return (1);
	}
	else if (exit.compare(cmd) == 0 )
		return (0);
	else
		return (1);
}

void	ftInOut(PhoneBook *agenda)
{
	std::string	cmd;

	do
	{
		std::cout << "Enter any of the following commands:\n";
		std::cout << "\t- ADD\n\t- SEARCH\n\t- EXIT\n";
		if (!std::getline(std::cin, cmd))
			return ;
	} while (ftCheckCmd(cmd, agenda));
}

int	main(void)
{
	PhoneBook agenda;

	agenda.initAgenda();
	ftInOut(&agenda);
	// cout << "idx: " << idx << " first name: " << Contacts::agenda.contacts[0].getFirstName << std::endl;
	return (0);
}