/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:55 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/11 20:20:24 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	this->brain = new Brain();
	*this->brain = *copy.brain;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete brain;
}

// Methods
void		Cat::setBrain(std::string idea) const {this->brain->setIdeas(idea);}
void		Cat::setBrain(Brain *brainA, const Brain *brainB) {this->brain->setIdeas(brainA, brainB);}
void		Cat::printBrain(void) const { this->brain->printIdeas();}

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	delete this->brain;

	this->brain = new Brain();
	this->setBrain(brain, assign.brain);
	return *this;
}

