#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <set>
# include <vector>
# include <limits>
# include <exception>

class Span
{
	public:
		// Constructors
		Span(unsigned int len);
		Span(const Span &copy);
		
		// Destructor
		~Span();

		// Getters
		unsigned int		getLen(void) const;
		unsigned int		getActualLen(void) const;
		std::vector<int>	getNumbers(void) const;

		// Methods
		void			addNumber(const int &n);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		void			addRange(std::vector<int> range);
		
		// Operators
		Span & operator=(const Span &assign);
		
		// Exceptions
		class LimitReachedException;

	private:
		Span();
		unsigned int		_len;
		unsigned int		_actualLen;
		std::vector<int>	_numbers;
};

#endif