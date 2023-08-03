/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:16 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:45:53 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)				{std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";}

void	Zombie::setName(std::string name)	{_name = name;}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << _name << std::endl;
}