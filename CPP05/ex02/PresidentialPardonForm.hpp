#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		// Constructors
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		
		// Destructor
		~PresidentialPardonForm();
		
		// Getters
		std::string	getTarget(void);

		// Methods
		void	execute(Bureaucrat &bureau);

		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		
	private:
		PresidentialPardonForm();
		std::string	_target;
};

#endif