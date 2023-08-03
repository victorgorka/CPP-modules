/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:44:44 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:44:45 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(void)
{
	Harl harl = Harl();
	std::string	nb;

	std::cout << "1. DEBUG\n2. INFO\n3. WARNING\n4. ERROR\n";
	std::getline(std::cin, nb);
	harl.complain(nb);
}