#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		// Constructors
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		
		// Destructor
		virtual ~PresidentialPardonForm();
		
		// Getters
		std::string	getTarget(void) const;

		// Methods
		void		execute(Bureaucrat const &bureau) const;

		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		
	private:
		PresidentialPardonForm();
		std::string	_target;
};

#endif