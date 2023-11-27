#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
	: AForm("RobotomyRequestForm", 72, 45), _target(copy.getTarget())
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}

// Getters
std::string	RobotomyRequestForm::getTarget(void) {return _target;}

// Methods
void	execute(Bureaucrat &bureau)
{
	AForm(bureau);
	std::cout << "drilling noises.. ";
	std::srand(std::time(nullptr));
	if (std::rand() % 2)
		std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
	else
		std::cout << "robotomy of " << this->getTarget() << " has failed" << std::endl;
}

// Operators
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	(void) assign;
	return *this;
}
