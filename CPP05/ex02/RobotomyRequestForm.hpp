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
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		
		// Destructor
		virtual ~RobotomyRequestForm();

		// Getters
		std::string	getTarget(void) const;

		// Methods
		void		execute(Bureaucrat const &bureau) const;
		
		// Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		
	private:
		RobotomyRequestForm();
		const std::string	_target;
};

#endif