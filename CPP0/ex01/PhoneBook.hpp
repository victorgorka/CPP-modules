#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		_idx;
		int		_aux;
	public:
		int		setIndex();
		void	initAgenda();
		void	addContact();
		void	searchContact();
};