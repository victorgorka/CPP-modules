#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

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
		const bool			getStatus(void) const;
		const int			getGradeToSign(void) const;
		const int			getGradeToExecute(void) const;

		// Setters
		void				setStatus(const bool status);

		// Methods
		void	beSigned(Bureaucrat &bureau);

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