#include "ShrubberyCreationAForm.hpp"

// Constructors
ShrubberyCreationAForm::ShrubberyCreationAForm()
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationAForm\e[0m" << std::endl;
}

ShrubberyCreationAForm::ShrubberyCreationAForm(const ShrubberyCreationAForm &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationAForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationAForm::~ShrubberyCreationAForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationAForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationAForm & ShrubberyCreationAForm::operator=(const ShrubberyCreationAForm &assign)
{
	(void) assign;
	return *this;
}

