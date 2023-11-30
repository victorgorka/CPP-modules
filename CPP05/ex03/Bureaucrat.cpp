#include "Bureaucrat.hpp"

// Exceptions
class Bureaucrat::GradeTooHighException: public std::exception
{
	virtual const char *what() const throw()
	{
		return "Grade Too High";
	}
};

class Bureaucrat::GradeTooLowException: public std::exception
{
	virtual const char *what() const throw()
	{
		return "Grade Too Low";
	}
};

// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
	: _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "\e[0;33mConstructor called of Bureaucrat\e[0m" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}


// Getters
const std::string	Bureaucrat::getName() const		{return _name;}
int					Bureaucrat::getGrade() const	{return _grade;}


// Methods
void Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " could'nt " << form.getName()
					<< " because " <<  e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " could'nt execute " << form.getName()
					<< " because " <<  e.what() << std::endl;
	}
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	// implementar la sobrecarga
	(void) assign;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return os;
}
