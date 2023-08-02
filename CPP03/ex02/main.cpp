/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:22:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/02 19:40:42 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap	pp = ScavTrap("pepe");
	ScavTrap	pc = ScavTrap("paco");
	FragTrap	clumsy = FragTrap("clumsy");
	FragTrap	terminator = FragTrap("terminator");
	ClapTrap	wallee = ClapTrap("wallee");

	pp.attack("Baldomero");
	pp.takeDamage(2);
	pp.beRepaired(11);
	std::cout << pp.getName() << ":\n"
								<< "hitP = " << pp.getHitP() << std::endl
								<< "energyP = " << pp.getEnergyP() << std::endl
								<< "attackD = " << pp.getAttackD() << std::endl << std::endl;
	pc.attack("manue");
	pc.takeDamage(50);
	pc.guardGate();
	std::cout << pc.getName() << ":\n"
								<< "hitP = " << pc.getHitP() << std::endl
								<< "energyP = " << pc.getEnergyP() << std::endl
								<< "attackD = " << pc.getAttackD() << std::endl << std::endl;
	clumsy.attack("sargent");
	clumsy.takeDamage(50);
	std::cout << clumsy.getName() << ":\n"
								<< "hitP = " << clumsy.getHitP() << std::endl
								<< "energyP = " << clumsy.getEnergyP() << std::endl
								<< "attackD = " << clumsy.getAttackD() << std::endl << std::endl;
	terminator.attack("skynet");
	terminator.takeDamage(50);
	terminator.highFivesGuys();
	std::cout << terminator.getName() << ":\n"
								<< "hitP = " << terminator.getHitP() << std::endl
								<< "energyP = " << terminator.getEnergyP() << std::endl
								<< "attackD = " << terminator.getAttackD() << std::endl << std::endl;
	wallee.attack("bad human");
	wallee.takeDamage(8);
	std::cout << wallee.getName() << ":\n"
								<< "hitP = " << wallee.getHitP() << std::endl
								<< "energyP = " << wallee.getEnergyP() << std::endl
								<< "attackD = " << wallee.getAttackD() << std::endl;
}