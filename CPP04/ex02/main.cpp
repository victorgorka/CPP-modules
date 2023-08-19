/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:28 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/19 16:36:02 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// void	leak(void)
// {
// 	system("leaks aanimal");
// }

int main()
{
	AAnimal *garfield = new Cat();

	garfield->makeSound();
	delete garfield;
	Dog	preciousPuppy = Dog();
	preciousPuppy.makeSound();
	return 0;
}