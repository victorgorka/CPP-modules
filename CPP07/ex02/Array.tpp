#include "Array.hpp"

// Exception
template<typename T>
class Array<T>::OutOfBoundsException: public std::exception
{
	virtual const char *what() const throw()
	{
		return "Out Of Bounds";
	}
};

// Getters
template<class T>
unsigned int	Array<T>::getSize(void) const {return (_n);}

// Constructors
template<class T>
Array<T>::Array()
{
	_n = 0;
	_array = NULL;
}

template<class T>
Array<T>::Array(unsigned int n)
{
	_n = n;
	_array = new T[n];
}


template<class T>
Array<T>::Array(const Array &cpy)
{
	_n = cpy.getSize();
	_array = new T[_n];
	for(unsigned int i = 0; i < _n; i++)
		_array[i] = cpy._array[i];
}


// Operators overload
template<class T>
Array<T>	&Array<T>::operator=(const Array<T> &assign)
{
	_n = assign.getSize();
	for(unsigned int i = 0; i < _n; i++)
		_array[i] = assign._array[i];
	return (*this);
}

template<class T>
T		&Array<T>::operator[](const unsigned int i)
{
	if (i < 0 || i > _n)
		throw OutOfBoundsException();
	return _array[i];
}