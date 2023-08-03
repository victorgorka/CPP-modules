/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:48:03 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:48:04 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.h"

int		PhoneBook::setIndex()
{
	if (_idx < 8)
		return (_idx);
	else if (_idx == 8 && _aux < 8)
		return (_aux);
	else
	{
		_aux = 0;
		return (0);
	}
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
	std::cout << std::endl;
	if (_idx > 7)
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
	std::string	format;

	format = str;
	if (str.length() > 10)
	{
		format = str.substr(0, 9);
		format += ".";
		return (format);
	}
	else if (str.length() <= 10)
		std::cout << std::setw(10);
	return (format);
}

int	PhoneBook::consultContact(std::string idx)
{
	int	i;

	if (idx.length() > 1 || !isdigit(idx[0]) || idx[0] > '0' + (_idx - 1))
	{
		std::cout << "Error: Just enter one of the available indices\n";
		return (1);
	}
	else
	{
		i = idx[0] - '0';
		std::cout << "First name: " << contacts[i].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[i].getNickName() << std::endl;
		std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Secret: " << contacts[i].getSecret() << std::endl << std::endl;
		return (0);
	}
}

void	PhoneBook::searchContact()
{
	std::string	i;

	std::cout	<< std::setw(10) << "index" << "|"
				<< std::setw(10) << "fname" << "|"
				<< std::setw(10) << "lname" << "|"
				<< std::setw(10) << "nname" << "|\n";
	for (int i = 0; i < _idx; i++)
	{
		std::cout << std::setw(10) << i						<< "|";
		std::cout << getFormat(contacts[i].getFirstName())	<< "|";
		std::cout << getFormat(contacts[i].getLastName())	<< "|";
		std::cout << getFormat(contacts[i].getNickName())	<< "|\n";
	}
	do
	{
		std::cout << "Enter the index of the the contact: ";
		if (!std::getline(std::cin, i))
			exit (0);
	} while (consultContact(i));
}
