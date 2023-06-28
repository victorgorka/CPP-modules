#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int		PhoneBook::setIndex()
{
	if (_idx < 8)
		return (_idx);
	else if (_idx == 8 && _aux < 8)
		return (_aux);
	else if (_idx == 8 && _aux == 8)
		return (0);
}

void	PhoneBook::addContact()
{
	std::string	attr;
	int			i;

	i = setIndex();
	do {
		std::cout << "Enter the first name: ";
		if (!std::getline(std::cin, attr))
			return ;
	} while (attr.length() == 0);
	contacts[i].setFirstName(attr);
	do {
		std::cout << "Enter the last name: ";
		if (!std::getline(std::cin, attr))
			return ;
	} while (attr.length() == 0);
	contacts[i].setLastName(attr);
	do {
		std::cout << "Enter the nick name: ";
		if (!std::getline(std::cin, attr))
			return ;
	} while (attr.length() == 0);
	contacts[i].setNickName(attr);
	do {
		std::cout << "Enter the phone number: ";
		if (!std::getline(std::cin, attr))
			return ;
	} while (attr.length() == 0);
	contacts[i].setPhoneNumber(attr);
	do {
		std::cout << "Enter your secret: ";
		if (!std::getline(std::cin, attr))
			return ;
	} while (attr.length() == 0);
	contacts[i].setSecret(attr);
	if (_idx == 7)
		_aux++;
	else
		_idx++;
}

void	PhoneBook::initAgenda()
{
	_idx = 0;
	_aux = 0;
}

std::string	getFormat(std::string str)
{

}

void	PhoneBook::searchContact()
{
	std::cout << "    index|" << "    fname|" << "    lname|" << "    nname|\n";
	for (int i = 0; i < _idx; i++)
	{
		std::cout << getFormat(contacts[i].getFirstName);
	}
}