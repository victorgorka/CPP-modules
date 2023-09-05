/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:01:57 by vde-prad          #+#    #+#             */
/*   Updated: 2023/09/01 16:58:33 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		
		// Destructor
		virtual ~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);

		// Methods
		void		setIdeas(std::string);
		void		setIdeas(Brain *brainA, const Brain *brainB);
		void		printIdeas(void) const;	
		std::string	getIdea(int i);

	private:
		std::string ideas[100];	
};

#endif