/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:02:46 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/09 19:02:47 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		
		// Destructor
		~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);

		// Methods
		void		makeSound(void) const;
		std::string	getType() const;
		
	protected:
		std::string	type;

};

#endif