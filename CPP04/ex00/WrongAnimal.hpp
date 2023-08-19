/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:02:36 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/19 16:26:46 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		
		// Destructor
		~WrongAnimal();
		
		// Operators
		WrongAnimal & operator=(const WrongAnimal &assign);

		// Methods	
		void		makeSound(void) const;
		std::string	getType() const;

	protected:
		std::string	type;
};

#endif