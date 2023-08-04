/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:22:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/04 11:42:38 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap	clumsy = FragTrap("clumsy");
	FragTrap	terminator = FragTrap("terminator");

	clumsy.attack("sargent");
	clumsy.takeDamage(50);
	std::cout << clumsy.getName() << ":\n"
								<< "hitP = " << clumsy.getHitP() << std::endl
								<< "energyP = " << clumsy.getEnergyP() << std::endl
								<< "attackD = " << clumsy.getAttackD() << std::endl << std::endl;
	terminator.attack("skynet");
	terminator.highFivesGuys();
	std::cout << terminator.getName() << ":\n"
								<< "hitP = " << terminator.getHitP() << std::endl
								<< "energyP = " << terminator.getEnergyP() << std::endl
								<< "attackD = " << terminator.getAttackD() << std::endl << std::endl;
}