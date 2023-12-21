#include "Span.hpp"

// Exceptions
class Span::LimitReachedException: public std::exception
{
	virtual const char *what() const throw()
	{
		return "Limit of numbers reached";
	}
};

// Constructors
Span::Span(unsigned int len)
{
	this->_len = len;
	this->_actualLen = 0;
}

Span::Span(const Span &copy)
{
	*this = copy;
}


// Destructor
Span::~Span()
{
}

// Getters
unsigned int		Span::getLen(void) const		{ return this->_len;}
unsigned int		Span::getActualLen(void) const		{ return this->_actualLen;}
std::vector<int>	Span::getNumbers(void) const	{ return this->_numbers;}

// Static Methods
static unsigned int	absolute(long n)
{
	if (n < 0)
		return (unsigned int)(n * -1);
	else
		return (unsigned int)(n);
}

// Methods
void			Span::addNumber(const int &n)
{
	if (_actualLen <= _len)
	{
		this->_numbers.push_back(n);
		this->_actualLen++;
	}
	else
		throw LimitReachedException();
}

void			Span::addRange(std::vector<int> range)
{
	if (range.size() <= _len)
	{
		_numbers = std::vector<int>(range.begin(), range.end());
		_actualLen = range.size();
	}
	else
		throw LimitReachedException();
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int			minLen = std::numeric_limits<unsigned int>::max();
	std::set<int>			numbers(_numbers.begin(), _numbers.end());
	std::set<int>::iterator	it = numbers.begin();

	if (numbers.size() == 1)
		return (0);
	while (it != numbers.end())
	{
		std::set<int>::iterator current = it;
		it++;
		if (it != numbers.end()
			&& absolute((long)*it - (long)*current) < minLen)
		{
			minLen = absolute((long)*it - (long)*current);
		}
	}
	return (minLen);
}

unsigned int	Span::longestSpan(void)
{
	std::set<int>			numbers(_numbers.begin(), _numbers.end());

	return ((unsigned int)absolute(*numbers.begin() - *(--numbers.end())));
}


// Operators
Span & Span::operator=(const Span &assign)
{
	this->_len = assign.getLen();
	this->_numbers = assign.getNumbers();
	return *this;
}

