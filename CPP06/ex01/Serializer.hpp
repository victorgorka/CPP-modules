/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:13:00 by vde-prad          #+#    #+#             */
/*   Updated: 2023/12/04 12:13:01 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include "data.h"
# include <stdint.h>

class Serializer
{
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data			*deserialize(uintptr_t raw);

	private:
		// Constructors
		Serializer();
		Serializer(const Serializer &copy);
		
		// Destructor
		~Serializer();
		
		// Operators
		Serializer & operator=(const Serializer &assign);
};

#endif
