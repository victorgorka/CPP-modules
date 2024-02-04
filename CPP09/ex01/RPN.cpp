#include "RPN.hpp"


// Constructors
RPN::RPN()
{
}

RPN::RPN(RPN const &copy)
{
	*this =copy;
}

// Destructors
RPN::~RPN()
{
}

// Methods
void RPN::computeInput(std::string input)
{
	for (unsigned long i = 0; i < input.size(); i++)
	{
		if (input[i] == ' ')
			continue;
		if (std::isdigit(input[i])) {
			_stack.push(input[i] - '0');
		} else if (!calculate(input[i])) {
			std::cout << "Error" << std::endl;
			return;
		}
	}
	if (_stack.size() != 1)
		std::cout << "Error" << std::endl;
	else
		std::cout << _stack.top() << std::endl;
}

bool	RPN::isOperator(const char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool	RPN::calculate(const char c)
{
	if (!isOperator(c) || _stack.size() < 2)
		return false;
	int	a;
	int	b;

	b = _stack.top();
	_stack.pop();
	a = _stack.top();
	_stack.pop();
	switch(c) {
		case '+':
			_stack.push(a + b);
			break;
		case '-':
			_stack.push(a - b);
			break;
		case '/':
			_stack.push(a / b);
			break;
		case '*':
			_stack.push(a * b);
			break;
		
	}
	return true;
}

// Operator overloading
RPN &RPN::operator=(RPN const &assign)
{
	_stack = assign._stack;
	return *this;
}
