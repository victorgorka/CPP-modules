/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:02:00 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/19 15:33:49 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	(void)copy;
}


// Destructor
AAnimal::~AAnimal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

// Methods
std::string AAnimal::getType() const { return type;}

// Operators
AAnimal & AAnimal::operator=(const AAnimal &assign)
{
	(void)assign;
	return *this;
}
