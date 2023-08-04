/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:25:01 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/04 11:38:48 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		// Constructors
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(std::string name);
		
		// Destructor
		~DiamondTrap();
		
		// Operators
		DiamondTrap & operator=(const DiamondTrap &assign);

		// Methods
		void			attack(const std::string &target);
		void			whoAmI(void);
		std::string		getName(void);
		int				getHitP(void);
		int				getEnergyP(void);
		int				getAttackD(void);
		
	private:
		DiamondTrap();
		std::string _name;
};

#endif