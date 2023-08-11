/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:52 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/11 20:30:51 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	this->brain = new Brain();
	*this->brain = *copy.brain;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete brain;
}

// Methods
void		Dog::setBrain(std::string idea) const {this->brain->setIdeas(idea);}
void		Dog::setBrain(Brain *brainA, const Brain *brainB) {this->brain->setIdeas(brainA, brainB);}
void		Dog::printBrain(void) const { this->brain->printIdeas();}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	delete this->brain;

	this->brain = new Brain();
	this->setBrain(brain, assign.brain);
	return *this;
}

