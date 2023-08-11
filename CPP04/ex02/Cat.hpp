/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:54 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/11 20:29:08 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);
		
		// Destructor
		~Cat();
		
		// Operators
		Cat &operator=(const Cat &assign);

		// Methods
		virtual void	makeSound(void) const;
		void		setBrain(std::string)const;
		void		setBrain(Brain *, const Brain *);
		void		printBrain(void) const;
		
	private:
		Brain *brain;
};

#endif