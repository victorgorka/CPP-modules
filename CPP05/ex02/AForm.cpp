#include "AForm.hpp"

// Exceptions
class	AForm::GradeTooHighException : public std::exception
{
	virtual const char *what() const throw()
	{
		return "Grade Too High";
	}
};

class	AForm::GradeTooLowException : public std::exception
{
	virtual const char *what() const throw()
	{
		return "Grade Too Low";
	}
};

class	AForm::FormNotSignedException : public std::exception
{
	virtual const char *what() const throw()
	{
		return "Form Not Signed";
	}
};

// Constructors
AForm::AForm() : _status(false), _gradeToSign(-1), _gradeToExe(-1)
{
	std::cout << "\e[0;33mDefault Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) 
	:	_name(name), _status(false),
		_gradeToSign(signGrade), 
		_gradeToExe(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &copy)
	:	_name(copy._name),
		_status(copy._status),
		_gradeToSign(copy._gradeToSign),
		_gradeToExe(copy._gradeToExe)
{
	std::cout << "\e[0;33mCopy Constructor called of AForm\e[0m" << std::endl;
}


// Destructor
AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}

// Getters
const std::string	AForm::getName(void) const				{return this->_name;}
bool				AForm::getStatus(void) const			{return this->_status;}
int					AForm::getGradeToSign(void) const		{return this->_gradeToSign;}
int					AForm::getGradeToExecute(void) const	{return this->_gradeToExe;}

// Setters
void				AForm::setStatus(const bool status) {this->_status = status;}

// Methods
bool				AForm::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() <= this->getGradeToSign())
		this->setStatus(true);
	else
	{
		throw GradeTooLowException();
		return false;
	}
	return true;
}

void		AForm::execute(Bureaucrat const &bureau) const
{
	if (this->getGradeToExecute() < bureau.getGrade())
		throw GradeTooLowException();
	else if (this->getStatus() == false)
		throw FormNotSignedException();
}

// Operators
AForm & AForm::operator=(const AForm &assign)
{
	(void) assign;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
	os << "Name: " << obj.getName() 
		<< "Status: " << obj.getStatus()
		<< "Grade to Sign: " << obj.getGradeToSign()
		<< "Grade to Execute: " << obj.getGradeToExecute()
		<< std::endl;
	return os;
}
