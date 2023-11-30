#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}

// Methods
AForm	*Intern::makeForm(std::string name, std::string target)
{
	short i = 0;
	AForm *form;
	std::string	formsType[3] = {
			"Presidential Pardon",
			"Robotomy Request Form",
			"Shrubbery Creation"
			};

	while(i < 3)
	{
		if (formsType[i] == name)
			break ;
		i++;
	}
	switch(i)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			form = new PresidentialPardonForm(target);
			return form;
			break;
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			form = new RobotomyRequestForm(target);
			return form;
			break;
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			form = new ShrubberyCreationForm(target);
			return form;
			break;
		default:
			std::cout << "Invalid form name" << std::endl;
			return NULL;
	}
}

// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}
