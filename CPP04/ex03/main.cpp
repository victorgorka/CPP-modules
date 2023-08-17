/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:28 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/17 17:30:48 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	leak(void)
{
	system("leaks interface");
}

int main(void)
{
	atexit(leak);
	AMateria	*src1 = new Ice();
	AMateria	*src2 = new Cure();
	AMateria	*src3 = new Cure();
	Character	v = Character("victor");
	ICharacter	*m = new Character("manzana");
	
	v.equip(src1);
	v.equip(src2);
	v.use(0, *m);
	Character n = Character(v);
	v.printInv();
	m->equip(src3);
	n = v;
	n.printInv();
	
	delete m;
}