#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
class AForm;
# include "AForm.hpp"

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string name, int grade);

		// Destructor
		~Bureaucrat(void);

		// Operators
		Bureaucrat &operator=(const Bureaucrat &assign);

		// Getters
		const std::string	getName(void) const;
		int					getGrade(void) const;

		// Methods
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signAForm(AForm &AForm); 

		// Exceptions
		class GradeTooHighException;
		class GradeTooLowException;

	private:
		Bureaucrat(void);
		const std::string 	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif