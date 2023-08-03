/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:46:18 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:46:19 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zz = Zombie("pepe");
	Zombie *pzz = new Zombie("Pepe2");

	zz.announce();
	pzz->announce();
	randomChump("paco");
	randomChump("foo");
	delete pzz;
	return (0);
}
