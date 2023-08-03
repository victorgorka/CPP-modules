/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:56 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:45:57 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

// includes
# include <string>
# include <iostream>

class Weapon
{
	private:
		std::string		_type;
	public:
		std::string&	getType();
		void			setType(std::string newType);
		Weapon(std::string wepaon);
};

#endif