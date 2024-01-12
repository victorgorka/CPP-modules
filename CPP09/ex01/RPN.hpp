#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cctype>

class RPN
{
	public:
		// Constructors
		RPN();
		RPN(RPN const &copy);

		// Destructors
		~RPN();

		// Methods
		void	computeInput(std::string input);


		// Operator overloading
		RPN &operator=(RPN const &assign);

	private:
		// Attributes
		std::stack<int> _stack;

		// Private methods
		bool	isOperator(const char c);
		bool	calculate(const char c);
};


#endif