/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:12:53 by vde-prad          #+#    #+#             */
/*   Updated: 2023/12/04 12:12:56 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Methods
uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

// Constructors
Serializer::Serializer()
{
	std::cout << "\e[0;33mDefault Constructor called of Serializer\e[0m" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Serializer\e[0m" << std::endl;
}


// Destructor
Serializer::~Serializer()
{
	std::cout << "\e[0;31mDestructor called of Serializer\e[0m" << std::endl;
}


// Operators
Serializer & Serializer::operator=(const Serializer &assign)
{
	(void) assign;
	return *this;
}

