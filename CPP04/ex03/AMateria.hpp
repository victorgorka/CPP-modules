/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:42:35 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/12 16:36:08 by vde-prad         ###   ########.fr       */
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
		AMateria(const AMateria &copy);
		
		// Destructor
		virtual ~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);
		
		// Methods
		std::string const &getType() const;
		virtual AMateria *clone() = 0;
		virtual void use(ICharacter& target);
		
	protected:
		std::string _type;
		AMateria();
};

#endif