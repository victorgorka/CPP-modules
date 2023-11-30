#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	public:
		// Constructors
		Form();
		Form(std::string, int, int);
		Form(const Form &copy);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);

		// Getters
		const std::string	getName(void) const;
		bool				getStatus(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;

		// Setters
		void				setStatus(const bool status);

		// Methods
		bool				beSigned(Bureaucrat &bureau);

		// Exceptions
		class GradeTooHighException;
		class GradeTooLowException;

	private:
		const std::string	_name;
		bool				_status;
		const int			_gradeToSign;
		const int			_gradeToExe;
};

#endif