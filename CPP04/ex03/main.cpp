/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:28 by vde-prad          #+#    #+#             */
/*   Updated: 2023/09/05 13:30:42 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void	leak(void)
{
	system("leaks interface");
}

int main(void)
{
	// first test provided by subject
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	// My own test
	AMateria	*src1 = new Ice();
	AMateria	*src2 = new Cure();
	AMateria	*src3 = new Cure();
	Character	v = Character("victor");
	ICharacter	*m = new Character("manzana");
	
	v.equip(src1);
	v.equip(src2);
	v.use(0, *m);
	Character n = Character(v);
	m->equip(src3);
	n = v;
	
	delete m;
	// atexit(leak);
	return 0;
}
