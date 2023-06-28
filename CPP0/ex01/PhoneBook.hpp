#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		void	ftAdd(int idx);
		void	ftSearch(int idx);
};