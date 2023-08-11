/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:59 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/11 20:33:57 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{
	public:
		// Constructors
		AAnimal();
		AAnimal(const AAnimal &copy);
		
		// Destructor
		virtual ~AAnimal();
		
		// Operators
		AAnimal & operator=(const AAnimal &assign);

		// Methods
		virtual void		makeSound(void) const = 0;
		std::string			getType() const;
	protected:
		std::string	type;
};

#endif