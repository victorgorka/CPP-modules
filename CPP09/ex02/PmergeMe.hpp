#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>

class PmergeMe
{
	public:
		// Constructors
		PmergeMe();
		PmergeMe(PmergeMe const &copy);

		// Destructors
		~PmergeMe();

		// Methods
		std::vector<int>	mergeSort(std::vector<int> v);

		// Operator overloading
		PmergeMe &operator=(PmergeMe const &assign);

	private:
		std::list<int>		_list;
		std::vector<int>	_vector;

		std::vector<int>	merge(std::vector<int> a, std::vector<int> b);

};

#endif