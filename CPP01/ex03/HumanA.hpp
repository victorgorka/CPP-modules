/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:00 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:45:01 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

// includes
# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
	private:
		Weapon		*weapon;
		std::string	_name;
	public:
		void		attack();
		HumanA(std::string name, Weapon &weapon);
} ;

#endif