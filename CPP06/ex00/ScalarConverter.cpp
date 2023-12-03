/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:51:51 by vde-prad          #+#    #+#             */
/*   Updated: 2023/12/03 13:37:13 by vde-prad         ###   ########.fr       */
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
	_size = _raw.size();
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
	// Testing
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
	// Explicit casting of the value given to the other three
	cast();
	printTypes(); // print all values casted
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
		for (int j = 0; j < 5; j++)
			_fail[j] = true;
		return ;
	}
	for (int j = i + 1; (unsigned long)j < _raw.size(); j++)
	{
		if (!std::isdigit(_raw[j]))
		{
			if (_raw[j] == 'f' && (unsigned long)j + 1 == _raw.size()
				&& j != i + 1)
			{
				type = floater;
				_fNum = std::atof(_raw.c_str());
				return ;
			}
			else
				break;
		}
		else if (std::isdigit(_raw[j]) && (unsigned long)j + 1 == _raw.size())
		{
			type = doubler;
			_dNum = std::atof(_raw.c_str());
			return ;
		}
	}
	type = indefer;
	for (int j = 0; j < 5; j++)
		_fail[j] = true;
}

void	ScalarConverter::cast(void)
{
	switch (type)
	{
		case character:
			_integer = static_cast<int>(_character);
			_fNum = static_cast<float>(_character);
			_dNum = static_cast<double>(_character);
			break;
		case integer:
			_character = static_cast<char>(_integer);
			_fNum = static_cast<float>(_integer);
			_dNum = static_cast<double>(_integer);
			break;
		case floater:
			_character = static_cast<char>(_fNum);
			if (_fNum > std::numeric_limits<int>::max
				|| _fNum < std::numeric_limits<int>::min)
				_fail[integer] = true;
			else
				_integer = static_cast<int>(_fNum);
			_dNum = static_cast<double>(_fail);
			break;
		case doubler:
			_character = static_cast<char>(_dNum);
			if (_dNum > std::numeric_limits<int>::max
				|| _dNum < std::numeric_limits<int>::min)
				_fail[integer] = true;
			else
				_integer = static_cast<int>(_dNum);
			if (_dNum > std::numeric_limits<float>::max
				|| _dNum < std::numeric_limits<float>::min)
				_fail[float] = true;
			else
				_fNum = static_cast<float>(_dNum);
			break;
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
