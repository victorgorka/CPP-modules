/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:49 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/19 16:10:16 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}

// Methods
void	WrongAnimal::makeSound() const
{
	if (!this->type.compare("WrongCat"))
		std::cout << "WrongMeow, WrongMeow\n";
}

std::string WrongAnimal::getType() const { return type;}

// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	this->type = assign.type;
	return *this;
}

