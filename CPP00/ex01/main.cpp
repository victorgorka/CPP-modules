/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:48:04 by vde-prad          #+#    #+#             */
/*   Updated: 2023/08/03 17:48:05 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.h"

int	main(void)
{
	PhoneBook agenda;

	agenda.initAgenda();
	ftInOut(&agenda);
	// cout << "idx: " << idx << " first name: " << Contacts::agenda.contacts[0].getFirstName << std::endl;
	return (0);
}