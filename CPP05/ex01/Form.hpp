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
		
	private:
		const std::string	_name;
		bool				_status; // at construction its not
		const int			_gradeToSign;
		const int			_gradeToExe;
};

#endif