/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:45:24 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:45:26 by vde-prad         ###   ########.fr       */
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
	Zombie();
public:
	void	announce(void);
	Zombie(std::string name);
	~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif