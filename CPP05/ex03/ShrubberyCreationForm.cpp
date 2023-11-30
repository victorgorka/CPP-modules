#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:AForm("Shrubbery Creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
	: AForm(copy), _target(copy.getTarget())
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

// Getters
std::string	ShrubberyCreationForm::getTarget(void) const { return _target;}

// Methods
void		ShrubberyCreationForm::execute(Bureaucrat const &bureau) const
{
	AForm::execute(bureau);
	std::ofstream myFile(this->getTarget() + "_shrubbery");
	myFile <<
		"               ,@@@@@@@," << std::endl <<
		"       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl <<
		"    ,&\\%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl <<
		"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl <<
		"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"<< std::endl <<
		"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"<< std::endl <<
		"   `&%\\ ` /%&'    |.|        \\ '|8'"<< std::endl <<
		"       |o|        | |         | |"<< std::endl <<
		"       |.|        | |         | |"<< std::endl <<
		"jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;

}

// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;
}

