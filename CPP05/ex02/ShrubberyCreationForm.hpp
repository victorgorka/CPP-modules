#ifndef SHRUBBERYCREATIONAForm_HPP
# define SHRUBBERYCREATIONAForm_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class ShrubberyCreationAForm : public AForm
{
	public:
		// Constructors
		ShrubberyCreationAForm();
		ShrubberyCreationAForm(const ShrubberyCreationAForm &copy);
		
		// Destructor
		~ShrubberyCreationAForm();
		
		// Operators
		ShrubberyCreationAForm & operator=(const ShrubberyCreationAForm &assign);
		
	private:
		const std::string	_target;
};

#endif