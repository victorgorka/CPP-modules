#include "PhoneBook.hpp"
#include <string>
#include <iostream>

void	PhoneBook::ftAdd(int idx)
{
	std::string attr;

	do {
		std::cout << "Entry the first name: ";
		std::getline(std::cin, attr);
	} while (attr.length() == 0);
	contacts[idx].setFirstName(attr);
	do {
		std::cout << "Entry the last name: ";
		std::getline(std::cin, attr);
	} while (attr.length() == 0);
	contacts[idx].setLastName(attr);
	do {
		std::cout << "Entry the nick name: ";
		std::getline(std::cin, attr);
	} while (attr.length() == 0);
	contacts[idx].setNickName(attr);
	do {
		std::cout << "Entry the phone number: ";
		std::getline(std::cin, attr);
	} while (attr.length() == 0);
	contacts[idx].setPhoneNumber(attr);
	do {
		std::cout << "Entry your secret: ";
		std::getline(std::cin, attr);
	} while (attr.length() == 0);
	contacts[idx].setSecret(attr);
}