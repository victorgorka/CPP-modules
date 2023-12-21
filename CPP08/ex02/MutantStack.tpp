#include "MutantStack.hpp"


template<typename T>
MutantStack<T>::MutantStack()
	: std::stack<T>()
{
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy)
{
	*this = copy;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &assign)
{
	std::stack<T>::operator=(assign);
	return *this;
}