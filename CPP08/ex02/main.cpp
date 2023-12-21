#include "MutantStack.hpp"

int main()
{
	std::cout << "****** SUBJECT TEST ******" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "****** OWN TEST ******" << std::endl;
	{
		MutantStack<int> stack;
		if (stack.empty())
			std::cout << "Mutated stack is empty." << std::endl;
		MutantStack<int> stack2;
		stack2.push(42);
		stack2.push(-21);
		stack2.push(1);
		stack = stack2;
		std::cout << "Assignement operator used" << std::endl;
		if (stack.empty() == false)
			std::cout << "Mutated stack is not empty." << std::endl;
		MutantStack<int>::iterator it = stack.begin();
		MutantStack<int>::iterator itEnd = stack.end();
		while (it != itEnd)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}