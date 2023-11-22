#include "Form.hpp"

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


// Operators
Form & Form::operator=(const Form &assign)
{
	(void) assign;
	return *this;
}

