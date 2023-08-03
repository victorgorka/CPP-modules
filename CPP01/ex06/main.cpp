/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:44:38 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:44:39 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl = Harl();
	std::string	lvl;

	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return 0;
	}
	lvl = argv[1];
	harl.complain(lvl);
}
