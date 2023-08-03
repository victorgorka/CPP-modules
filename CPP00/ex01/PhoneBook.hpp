/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:48:01 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:48:02 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// includes

#include "agenda.h"

// classes
class PhoneBook
{
	private:
		Contact contacts[8];
		int		_idx;
		int		_aux;
	public:
		int		consultContact(std::string idx);	
		int		setIndex();
		void	initAgenda();
		void	addContact();
		void	searchContact();

};

#endif