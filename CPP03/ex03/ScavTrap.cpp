/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:33:57 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 12:35:30 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap()
{
	std::cout << "\e[0;31mScavTrap constructor called\e[0m\n";
	_hitP = 100;
	_energyP = 50;
	_attackD = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "\e[0;31mScavTrap\e[0m "<< name << " \e[0;31mconstructor called\e[0m\n";
	this->_name = name;
	_hitP = 100;
	_energyP = 50;
	_attackD = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of ScavTrap\e[0m" << std::endl;
}


// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mScavTrap\e[0m "<< this->_name << " \e[0;31mdestructor called\e[0m\n";
}

// Methods
void ScavTrap::guardGate(){std::cout << "Gate keeper mode on!\n";}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyP <= 0 || this->_hitP <= 0)
		std::cout << "Not enougth energy or hit points\n";
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "<< this->_attackD << " points of damage!\n";
		this->_energyP--;
	}
}

// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	this->_name = assign._name;
	this->_hitP = assign._hitP;
	this->_energyP = assign._energyP;
	this->_attackD = assign._attackD;
	return *this;
}

