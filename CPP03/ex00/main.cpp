/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:22:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/02 15:53:34 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap pp = ClapTrap("pepe");

	pp.attack("paco");
	pp.takeDamage(2);
	pp.beRepaired(11);
	std::cout << pp.getName() << ":\n"
								<< "hitP = " << pp.getHitP() << std::endl
								<< "energyP = " << pp.getEnergyP() << std::endl
								<< "attackD = " << pp.getAttackD() << std::endl;
}