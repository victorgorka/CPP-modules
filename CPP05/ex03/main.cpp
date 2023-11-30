#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Intern	someRandomIntern;
	AForm	*rrf;

	rrf = someRandomIntern.makeForm("Robotomy Request Form", "Bender");
	if (!rrf)
		return 1;
	try
	{
		Bureaucrat lonso = Bureaucrat("Alonso", 23);
		lonso.signForm(*rrf);
		lonso.executeForm(*rrf);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete rrf;
	return 0;
}
