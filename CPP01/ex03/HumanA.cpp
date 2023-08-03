/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:02 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:45:03 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->weapon = &weapon;
}
