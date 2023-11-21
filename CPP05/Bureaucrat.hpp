#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
public:
	// Constructors
	Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat(const std::string name, int grade);

	// Destructor
	~Bureaucrat();

	// Operators
	Bureaucrat &operator=(const Bureaucrat &assign);

	// Getters
	const std::string	getName() const;
	int					getGrade() const;

	// Methods
	void incrementarade();
	void decrementGrade();

	// Exceptions
	class GradeTooHighException;
	class GradeTooLowException;

private:
	const std::string 	_name;
	int					_grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif