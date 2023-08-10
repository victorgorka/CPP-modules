/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:02:47 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/09 19:02:48 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}


// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

// Methods
void	Animal::makeSound() const
{
	if (!this->type.compare("Dog"))
		std::cout << "Woof, woof\n";
	else if (!this->type.compare("Cat"))
		std::cout << "Meow, meow\n";
}

std::string Animal::getType() const { return type;}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	(void) assign;
	return *this;
}

