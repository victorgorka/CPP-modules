/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:52 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:45:53 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	&Weapon::getType() { return (_type); }
void		Weapon::setType(std::string newType) { _type = newType; }

Weapon::Weapon(std::string weapon) { _type = weapon; }