/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:51:51 by vde-prad          #+#    #+#             */
/*   Updated: 2023/12/02 17:30:57 by vde-prad         ###   ########.fr       */
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
	const char *enumString[] {
		"-inff",
		"+inff",
		"nanf",
		"-inf",
		"+inf",
		"nan"
	}
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
		if (_raw.size() <= 4 && _raw != "nanf")
		{
			type = doubler;
			_dNum = std::atof(_raw.c_str());
		}
		else
		{
			type = floater;
			_fNum = std::atof(_raw.c_str());
		}
		_fail[character] = _fail[integer] = true;
	}
	else // Check if ttype is integer, floater or doubler
		checkIFD();
	cast(); // Explicit casting of the value given to the other three
	// printTypes(); // print all values casted
}

void	ScalarConverter::checkIFD(void)
{
	// Checks if raw is an integer
	for (int i = 0; _raw[i] != std::string::npos; i++)
	{
		bool sign = true;

		if (sign && _raw[i] == '-')
			sign = false;
		else if (std::isdigit(_raw[i])
				&& _raw[i + 1] == std::string::npos)
		{
			type = integer;
			_integer = std::atoi(_raw.c_str());
			return ;
		}
		else if (!std::isdigit(_raw[i]))
		{
			checkDoublerFloater(i);
			break;
		}
	}
}

void	ScalarConverter::checkDoublerFloater(int &i)
{
	if (_raw[i] != '.')
	{
		type = indefer;
		_fail[character] = _fail[integer] = _fail[floater] = _fail[doubler] = true;
		return ;
	}
	for (int j = i + 1; _raw[j] != std::string::npos; j++)
	{
		if (!std::isdigit(_raw[j]) && _raw[j] == 'f')
		{
			if (_raw[j + 1] == std::string::npos)
			{
				type = floater;
				_fNum = std::atof(_raw.c_str());
			}
			else
				break;
		}
		else if (std::isdigit(_raw[j]) && _raw[j + 1] == std::string::npos)
		{
			type = doubler;
			_dNum = std::atof(_raw.c_str());
		}
	}
	type = indefer;
	_fail[character] = _fail[integer] = _fail[floater] = _fail[doubler] = true;
}

void	ScalarConverter::cast(void)
{
	
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
