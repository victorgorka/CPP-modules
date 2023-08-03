/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:44:40 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:44:41 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << "cannot believe adding extra bacon costs more money. You didn’t put "
				"enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << " think I deserve to have some extra bacon for free. I’ve been coming "
				"for years whereas you started working here since last month.\n";
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << "his is unacceptable! I want to speak to the manager now.\n";
}

int		ft_comp(std::string level)
{
	int			i = 0;
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (!level.compare(lvls[i]))
			return i + 1;
		i++;
	}
	return -1;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*pdebug)(void) = &Harl::debug;
	void	(Harl::*pinfo)(void) = &Harl::info;
	void	(Harl::*pwarning)(void) = &Harl::warning;
	void	(Harl::*perror)(void) = &Harl::error;

	switch (ft_comp(level))
	{
		case 1:
			(this->*pdebug)();
		case 2:
			(this->*pinfo)();
		case 3:
			(this->*pwarning)();
		case 4:
			(this->*perror)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

Harl::Harl(void){}
Harl::~Harl(void){}