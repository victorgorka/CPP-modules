/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:42:35 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/18 13:21:45 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		// Constructors
		AMateria(std::string const &type);
		
		// Destructor
		virtual ~AMateria();
		
		
		// Methods
		std::string const &getType() const;
		virtual AMateria *clone() = 0;
		virtual void use(ICharacter& target);
		
	protected:
		std::string _type;
		AMateria();
		AMateria(const AMateria &copy);
		AMateria & operator=(const AMateria &assign);
};

#endif