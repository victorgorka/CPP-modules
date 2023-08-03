/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:44:57 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:44:58 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

// includes
# include "Weapon.hpp"
# include <iostream>

class	HumanB
{
	private:
		Weapon		*weapon;
		std::string	_name;
	public:
		void		attack();
		void		setWeapon(Weapon&);
		HumanB(std::string name);
} ;

#endif