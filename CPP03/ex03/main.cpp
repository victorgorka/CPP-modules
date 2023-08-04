/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:22:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 12:33:44by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	ruby = DiamondTrap("ruby");

	ruby.whoAmI();
	ruby.highFivesGuys();
	ruby.attack("romeo");
	ruby.beRepaired(100);
	ruby.takeDamage(10);
	std::cout << ruby.getName() << ":\n"
								<< "hitP = " << ruby.getHitP() << std::endl
								<< "energyP = " << ruby.getEnergyP() << std::endl
								<< "attackD = " << ruby.getAttackD() << std::endl << std::endl;
	return 0;
}