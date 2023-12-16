#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <iostream>
# include <vector>

class HardToFindException : public std::exception
{
	virtual const char *what() const throw()
	{
		return ("Integer Not Found");
	}
};

template<typename T>
void	easyfind(T cont, int n)
{
	if (std::find(cont.begin(), cont.end(), n) == cont.end())
		throw HardToFindException();
	else
		std::cout << "Integer Found" << std::endl;
}


#endif