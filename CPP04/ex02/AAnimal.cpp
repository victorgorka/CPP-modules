/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:02:00 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/10 13:46:19 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
	brain = new Brain();
}

AAnimal::AAnimal(const AAnimal &copy)
{
	brain = new Brain(*copy.brain);
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}


// Destructor
AAnimal::~AAnimal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
	delete brain;
}

// Methods
std::string AAnimal::getType() const { return type;}
void		AAnimal::setBrain(std::string idea) const {this->brain->setIdeas(idea);}
void		AAnimal::setBrain(Brain *brainA, const Brain *brainB) {this->brain->setIdeas(brainA, brainB);}
void		AAnimal::printBrain(void) const { this->brain->printIdeas();}

// Operators
AAnimal & AAnimal::operator=(const AAnimal &assign)
{
	delete this->brain;

	this->brain = new Brain();
	assign.brain->printIdeas();
	this->setBrain(brain, assign.brain);
	return *this;
}
