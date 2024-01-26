#include "PmergeMe.hpp"


// Constructors
PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	*this = copy;
}

// Destructors
PmergeMe::~PmergeMe()
{
}

// Methods
void			PmergeMe::mergeInsertionSort(int argc, char **argv)
{
	if (proccessInput(argc, argv)) {
		std::cout << "Error" << std::endl;
		return 0;
	} else {
		// Medir tiempo vector
		mergeInsertionSortVector();
		// Medir tiempo list
		mergeInsertionSortList();
	}
}

std::list<int>	PmergeMe::mergeInsertionSortList(std::list<int> l)
{
	if (l.size() <= 5) {
		insertSort(l);
		return l;
	} else {
		std::list<int>::iterator middle = l.begin();
		for (unsigned long i = 0; i < l.size()/2; i++)
			middle++;
		std::list<int> a = mergeInsertionSortList(std::list<int>(l.begin(), middle));
		std::list<int> b = mergeInsertionSortList(std::list<int>(middle, l.end()));
		return merge(a, b);
	}
}

std::vector<int>	PmergeMe::mergeInsertionSortVector(std::vector<int> v)
{
	if (v.size() <= 5) {
		insertSort(v);
		return v;
	} else {
		std::vector<int>::iterator middle = v.begin() + v.size() / 2;
		std::vector<int> a = mergeInsertionSortVector(std::vector<int>(v.begin(), middle));
		std::vector<int> b = mergeInsertionSortVector(std::vector<int>(middle, v.end()));
		return merge(a, b);
	}
}


// Operator overloading
PmergeMe &PmergeMe::operator=(PmergeMe const &assign)
{
	_list = assign._list;
	_vector = assign._vector;
	return *this;
}