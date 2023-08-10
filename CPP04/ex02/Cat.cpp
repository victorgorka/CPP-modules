/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/10 14:00:09 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	*this->brain = *copy.brain;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meauw\n";
}

// Methods

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	delete this->brain;

	this->brain = new Brain();
	this->setBrain(brain, assign.brain);
	return *this;
}

