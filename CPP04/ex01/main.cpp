/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:28 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/09 19:01:29 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* h = new Cat();
	// j->setBrain("trust humans\n");
	// j->printBrain();
	delete j;//should not create a leak
	delete h;

	Cat *i = new Cat();

	i->setBrain("Dont trust humans\n");

	Cat r = Cat(*i);

	r.printBrain();
	r = *i;
	i->setBrain("trust humans\n");
	delete i;
	r.printBrain();
	return 0;
}