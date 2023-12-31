/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:48:07 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:48:08 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

// includes
# include "agenda.h"

// classes
class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_secret;
	public:
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getSecret();
		void		setFirstName(std::string fname);
		void		setLastName(std::string lname);
		void		setNickName(std::string nname);
		void		setPhoneNumber(std::string number);
		void		setSecret(std::string secret);
};

#endif