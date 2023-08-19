/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:59 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/19 15:34:33 by vde-prad         ###   ########.fr       */
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
		// Destructor
		virtual ~AAnimal();
		
		// Methods
		virtual void		makeSound(void) const = 0;
		std::string			getType() const;
	protected:
		std::string	type;
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal & operator=(const AAnimal &assign);
};

#endif