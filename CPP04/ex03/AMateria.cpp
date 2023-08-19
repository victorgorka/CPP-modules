/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:42:24 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/19 13:52:52 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
}

// Destructor
AMateria::~AMateria()
{
}

// Methods
std::string const &AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() <<" *\n";
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() <<"'s wounds *\n";
}

// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign;
	return *this;
}

