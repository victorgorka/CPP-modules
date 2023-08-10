/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:58 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/09 19:01:59 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}

// Methods
void	Brain::setIdeas(std::string idea) 
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

void	Brain::setIdeas(Brain *brainA, const Brain *brainB)
{
	for(int i = 0; i < 100; i++)
		brainA->ideas[i] = brainB->ideas[i];
}

void	Brain::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i];
}


std::string	Brain::getIdea(int i) { return this->ideas[i];}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = assign.ideas[i];
	return *this;
}
