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
	DiamondTrap	titi = DiamondTrap("nana");

	titi.whoAmI();
	titi.attack("romeo");
	titi.beRepaired(100);
	std::cout << titi.getName() << ":\n"
								<< "hitP = " << titi.getHitP() << std::endl
								<< "energyP = " << titi.getEnergyP() << std::endl
								<< "attackD = " << titi.getAttackD() << std::endl << std::endl;
	return 0;
}