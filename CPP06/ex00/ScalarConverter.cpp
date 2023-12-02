/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:51:51 by vde-prad          #+#    #+#             */
/*   Updated: 2023/12/02 18:49:59 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string 			ScalarConverter::_raw = "";
char					ScalarConverter::_character = 0;
int						ScalarConverter::_integer = 0;
float					ScalarConverter::_fNum = 0.0;
double					ScalarConverter::_dNum = 0.0;
bool					ScalarConverter::_fail[4] = {false, false, false, false};
int						ScalarConverter::_size = 0;
ScalarConverter::Type	ScalarConverter::type = indefer;

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
	// cast(); // Explicit casting of the value given to the other three
	// printTypes(); // print all values casted
	switch (type)
	{
		case 0:
			std::cout << "character: " << _character << std::endl;
			break;
		case 1:
			std::cout << "integer: " << _integer << std::endl;
			break;
		case 2:
			std::cout << "floater: " << _fNum << std::endl;
			break;
		case 3:
			std::cout << "doubler: " << _dNum << std::endl;
			break;
		case 4:
			std::cout << "indefer\n";
			break;
	}
}

void	ScalarConverter::checkIFD(void)
{
	// Checks if raw is an integer
	for (int i = 0; (unsigned long)i < _raw.size(); i++)
	{
		bool sign = true;

		if (sign && _raw[i] == '-')
			sign = false;
		else if (std::isdigit(_raw[i]) && (unsigned long)i + 1 == _raw.size())
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
	for (int j = i + 1; (unsigned long)j < _raw.size(); j++)
	{
		if (!std::isdigit(_raw[j]))
		{
			if (_raw[j] == 'f' && (unsigned long)j + 1 == _raw.size())
			{
				type = floater;
				_fNum = std::atof(_raw.c_str());
			}
			else
				break;
		}
		else if (std::isdigit(_raw[j]) && (unsigned long)j + 1 == _raw.size())
		{
			type = doubler;
			_dNum = std::atof(_raw.c_str());
		}
	}
	type = indefer;
	_fail[character] = _fail[integer] = _fail[floater] = _fail[doubler] = true;
}

// void	ScalarConverter::cast(void)
// {
	
// }

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
