#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>

class RPN
{
	public:
		RPN(std::string argv);

	private:
		std::stack<int> _stack;
};


#endif