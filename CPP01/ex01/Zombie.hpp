/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:15 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:45:16 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

// include
# include <string>
# include <iostream>

// class
class Zombie
{
private:
	std::string	_name;
public:
	void	announce(void);
	void	setName(std::string name);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif