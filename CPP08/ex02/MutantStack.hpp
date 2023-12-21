#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
	// Constructors
	MutantStack();
	virtual ~MutantStack();
	MutantStack(MutantStack const &copy);

	// Iterator
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();

	// Operator overload
	MutantStack &operator=(MutantStack const &assign);

};
# include "MutantStack.tpp"

#endif