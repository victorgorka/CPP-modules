#ifndef SHRUBBERYCREATIONForm_HPP
# define SHRUBBERYCREATIONForm_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		// Constructors
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		
		// Destructor
		virtual ~ShrubberyCreationForm(void);

		// Getters
		std::string	getTarget(void) const;

		// Methods
		void		execute(Bureaucrat const &bureau) const;
		
		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);
		
	private:
		ShrubberyCreationForm();
		const std::string	_target;
};

#endif