#include "agenda.h"

int	main(void)
{
	PhoneBook agenda;

	agenda.initAgenda();
	ftInOut(&agenda);
	// cout << "idx: " << idx << " first name: " << Contacts::agenda.contacts[0].getFirstName << std::endl;
	return (0);
}