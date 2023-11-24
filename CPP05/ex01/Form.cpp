#include "Form.hpp"

// Exceptions
class	Form::GradeTooHighException: public std::exception
{
	virtual const char *what() const throw()
	{
		return "Grade Too High";
	}
};

class	Form::GradeTooLowException: public std::exception
{
	virtual const char *what() const throw()
	{
		return "Grade Too Low";
	}
};

// Constructors
Form::Form() : _status(false), _gradeToSign(-1), _gradeToExe(-1)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) 
	:	_name(name), _status(false),
		_gradeToSign(signGrade), 
		_gradeToExe(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException;
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException;
}

Form::Form(const Form &copy)
	:	_status(copy._status),
		_gradeToSign(copy._gradeToSign),
		_gradeToExe(copy._gradeToExe),
		_name(copy._name)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}


// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

// Getters
const std::string	Form::getName(void) const				{return this->_name;}
const bool			Form::getStatus(void) const			{return this->_status;}
const int			Form::getGradeToSign(void) const		{return this->_gradeToSign;}
const int			Form::getGradeToExecute(void) const	{return this->_gradeToExe;}

// Setters
void				Form::setStatus(const bool status) {this->_status = status;}

// Methods
bool				Form::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() <= this->getGradeToSign())
		this->setStatus(true);
	else
	{
		throw GradeTooLowException;
		return false;
	}
	return true;
}

// Operators
Form & Form::operator=(const Form &assign)
{
	(void) assign;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << "Name: " << obj.getName() 
		<< "Status: " << obj.getStatus()
		<< "Grade to Sign: " << obj.getGradeToSign()
		<< "Grade to Execute: " << obj.getGradeToExecute()
		<< std::endl;
	return os;
}
