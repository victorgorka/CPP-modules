#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "cstdlib"

class RobotomyRequestForm : public AForm
{
	public:
		// Constructors
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		
		// Destructor
		~RobotomyRequestForm();

		// Getters
		std::string	getTarget(void);

		// Methods
		void	execute(Bureaucrat &bureau);
		
		// Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		
	private:
		RobotomyRequestForm();
		const std::string	_target;
};

#endif