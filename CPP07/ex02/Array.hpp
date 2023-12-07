#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<class T>
class Array
{
	public:
		// Constructors
		Array();
		Array(unsigned int n);
		Array(const Array &cpy);

		// Operators overload
		Array	&operator=(const Array &assign);
		T		&operator[](const unsigned int i);

		// Exceptions
		class OutOfBoundsException;

		// Getters
		unsigned int	getSize() const;

	private:
		unsigned int	_n;
		T				*_array;
};

# include "Array.tpp"

#endif