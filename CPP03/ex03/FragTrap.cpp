/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:25:07 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:25:08 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap()
{
	std::cout << "\e[0;31mFragTrap constructor called\e[0m\n";
	_hitP = 100;
	_energyP = 100;
	_attackD = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "\e[0;31mFragTrap\e[0m "<< name << " \e[0;31mconstructor called\e[0m\n";
	this->_name = name;
	_hitP = 100;
	_energyP = 100;
	_attackD = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of FragTrap\e[0m" << std::endl;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mFragTrap\e[0m "<< this->_name << " \e[0;31mdestructor called\e[0m\n";
}

// Methods
void	FragTrap::highFivesGuys()
{
	std::cout << "Gimme five!... He he he, too slow...\n";
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energyP <= 0 || this->_hitP <= 0)
		std::cout << "Not enougth energy or hit points\n";
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "<< this->_attackD << " points of damage!\n";
		this->_energyP--;
	}
}

// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	this->_name = assign._name;
	this->_hitP = assign._hitP;
	this->_energyP = assign._energyP;
	this->_attackD = assign._attackD;
	return *this;
}

