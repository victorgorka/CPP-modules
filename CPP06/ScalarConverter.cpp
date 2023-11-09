#include "ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter()
{
	std::cout << "\e[0;33mDefault Constructor called of ScalarConverter\e[0m" << std::endl;
}

ScalarConverter(const char *input) : _raw(input)
{
	for (int i = 0; i < 4; i++)
		_fail[i] = 0;
	this->_size = _raw.size();
	proccessInput();
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ScalarConverter\e[0m" << std::endl;
}

// Methods
static void	ScalarConverter::proccessInput(void)
{
	if (this->_size == 1 && !std::isdigit(_raw))
	{
		this->_type = character;
		this->_character = _raw[0];
	}
	else if (this->_size == 3 && this->_raw[0] == '\'' && this->_raw[2] == '\'')
	{
		this->type = character;
		character = this->_raw[1];
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
