/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:22:22 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/02 15:57:57 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called\n";
	_name = name;
	_hitP = 10;
	_energyP = 10;
	_attackD = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor called of ClapTrap\n" << std::endl;
	*this = copy;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called of ClapTrap\n" << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	(void) assign;
	return *this;
}

// Methods
void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyP <= 0 || this->_hitP <= 0)
		std::cout << "Not enougth energy or hit points\n";
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "<< this->_attackD << " points of damage!\n";
		this->_energyP--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitP <= 0)
		std::cout << "The target is already dead\n";
	else
	{
		this->_hitP -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage points!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyP <= 0 || this->_hitP <= 0)
		std::cout << "Not possible to repair\n";
	else
	{
		this->_energyP--;
		this->_hitP += amount;
		std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit points!\n";
	}
}


std::string		ClapTrap::getName(void){return _name;}
int				ClapTrap::getHitP(void){return _hitP;}
int				ClapTrap::getEnergyP(void){return _energyP;}
int				ClapTrap::getAttackD(void){return _attackD;}