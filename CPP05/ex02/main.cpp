#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {

	try{
		Bureaucrat	juan("juan", 120);
		Bureaucrat	pepe("pepe", 50);
		Bureaucrat	alfonso("alfonso", 1);
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Victoru");
		ShrubberyCreationForm tree("house");
		juan.signForm(tree);
		juan.executeForm(tree);
		pepe.signForm(robot);
		pepe.executeForm(robot);
		alfonso.executeForm(robot);
		alfonso.signForm(pardon);
		alfonso.executeForm(pardon);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
