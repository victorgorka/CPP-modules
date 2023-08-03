/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:22:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/02 19:22:09 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	pp = ScavTrap("pepe");
	ScavTrap	pc = ScavTrap("paco");
	ClapTrap	wallee = ClapTrap("wallee");

	pp.attack("Baldomero");
	pp.takeDamage(2);
	pp.beRepaired(10);
	pp.guardGate();
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
	wallee.attack("bad human");
	wallee.takeDamage(8);
	std::cout << wallee.getName() << ":\n"
								<< "hitP = " << wallee.getHitP() << std::endl
								<< "energyP = " << wallee.getEnergyP() << std::endl
								<< "attackD = " << wallee.getAttackD() << std::endl;
}