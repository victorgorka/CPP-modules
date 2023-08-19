/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:28 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/19 16:36:09 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// void	leak(void)
// {
// 	system("leaks brain");
// }

int main()
{
	// atexit(leak);
	const Animal* j = new Dog();
	const Animal* h = new Cat();
	delete j;//should not create a leak
	delete h;

	Cat i = Cat();

	i.setBrain("Dont trust humans\n");
	Cat r = Cat(i);

	r.printBrain();
	r = i;
	i.setBrain("trust humans\n");
	r.printBrain();
	return 0;
}