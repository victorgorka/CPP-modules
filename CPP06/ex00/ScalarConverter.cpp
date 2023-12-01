/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:51:51 by vde-prad          #+#    #+#             */
/*   Updated: 2023/12/01 18:24:53 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter()
{
	std::cout << "\e[0;33mDefault Constructor called of ScalarConverter\e[0m" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void)copy;
	std::cout << "\e[0;33mCopy Constructor called of ScalarConverter\e[0m" << std::endl;
}

// Methods
void	ScalarConverter::convert(std::string raw)
{
	_raw = raw;
	for (int i = 0; i < 4; i++)
		_fail[i] = false;
	// Check if type is character or indefer
	if (_size == 1 && !std::isdigit(_raw[0]))
	{
		type = character;
		_character = _raw[0];
	}
	else if (_size == 3 && _raw[0] == '\'' && _raw[2] == '\'')
	{
		type = character;
		_character = _raw[1];
	}
	else if (_raw == "-inff" || _raw == "+inff" || _raw == "nanf"
			|| _raw == "-inf" || _raw == "+inf" || _raw == "nan")
	{
		type = indefer;
		_fail[character] = _fail[integer] = true;
	}
	else // Check if ttype is integer, floater or doubler
		checkIFD();
	// cast(); // Explicit casting of the value given to the other three
	// printTypes(); // print all values casted
}

void	ScalarConverter::checkIFD(void)
{
	// Checks if raw is an integer
	for (int i = 0; _raw[i] != std::string::npos; i++)
	{
		bool sign = true;

		if (sign && _raw[i] != '-')
			sign = false;
		else if (_raw[i])
		
	}
}

// Destructor
ScalarConverter::~ScalarConverter()
{
	std::cout << "\e[0;31mDestructor called of ScalarConverter\e[0m" << std::endl;
}


// Operators
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void) assign;
	return *this;
}
