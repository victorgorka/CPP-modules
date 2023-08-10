/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:28 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/10 14:03:39 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	// const AAnimal* j = new Dog();
	// const AAnimal* h = new Cat();
	// delete j;//should not create a leak
	// delete h;

	Cat *garfield = new Cat();

	garfield->makeSound();
	delete garfield;
	Dog	preciousPuppy = Dog();
	preciousPuppy.makeSound();
	return 0;
}