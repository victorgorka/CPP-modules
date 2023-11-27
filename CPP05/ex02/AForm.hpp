#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include <exception>
class Bureaucrat;
# include "Bureaucrat.hpp"

class AForm
{
	public:
		// Constructors
		AForm();
		AForm(std::string, int, int);
		AForm(const AForm &copy);
		
		// Destructor
		~AForm();
		
		// Operators
		AForm & operator=(const AForm &assign);

		// Getters
		const std::string	getName(void) const;
		bool				getStatus(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;

		// Setters
		void				setStatus(const bool status);

		// Methods
		bool				beSigned(Bureaucrat &bureau);
		virtual void		execute(Bureaucrat &bureau) = 0;

		// Exceptions
		class GradeTooHighException;
		class GradeTooLowException;
		class FormNotSignedException;

	protected:
		const std::string	_name;
		bool				_status;
		const int			_gradeToSign;
		const int			_gradeToExe;
};

#endif