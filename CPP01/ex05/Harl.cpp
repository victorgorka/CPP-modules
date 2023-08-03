/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:44:46 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:44:50 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info( void )
{
	std::cout << "cannot believe adding extra bacon costs more money. You didn’t put "
				"enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning( void )
{
	std::cout << " think I deserve to have some extra bacon for free. I’ve been coming "
				"for years whereas you started working here since last month.\n";
}

void	Harl::error( void )
{
	std::cout << "his is unacceptable! I want to speak to the manager now.\n";
}

int		ft_stoi(std::string level)
{
	if (level.size() == 1 && std::isdigit(level[0]))
		return(level[0] - '0');
	else
		return(-1);
}

void	Harl::complain(std::string level)
{
	(void)level;
	void	(Harl::*pdebug)(void) = &Harl::debug;
	void	(Harl::*pinfo)(void) = &Harl::info;
	void	(Harl::*pwarning)(void) = &Harl::warning;
	void	(Harl::*perror)(void) = &Harl::error;

	switch (ft_stoi(level))
	{
		case 1:
			(this->*pdebug)();
			break;
		case 2:
			(this->*pinfo)();
			break;
		case 3:
			(this->*pwarning)();
			break;
		case 4:
			(this->*perror)();
			break;
		default:
			std::cout << "Non valid input\n";
			break;
	}
}

Harl::Harl(void){}
Harl::~Harl(void){}