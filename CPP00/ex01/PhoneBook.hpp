
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// includes

#include "agenda.h"

// classes
class PhoneBook
{
	private:
		Contact contacts[8];
		int		_idx;
		int		_aux;
	public:
		int		consultContact(std::string idx);	
		int		setIndex();
		void	initAgenda();
		void	addContact();
		void	searchContact();

};

#endif