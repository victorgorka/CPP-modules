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
std::vector<int>	PmergeMe::mergeInsertionSort(std::vector<int> v)
{
	if (v.size() <= 5) {
		insertSort(v);
		return v;
	} else {
		std::vector<int> a = mergeInsertionSort(std::vector<int>(v.begin(), v.begin() + v.size()/2));
		std::vector<int> b = mergeInsertionSort(std::vector<int>(v.begin() + v.size()/2, v.end()));
		return merge(a, b);
	}
}

std::vector<int>	PmergeMe::merge(std::vector<int> a, std::vector<int> b)
{
	std::vector<int>	merged;

	while (a.size() && b.size()) {
		if (a.front() <= b.front()) {
			merged.push_back(a.front());
			a.erase(a.begin());
		} else {
			merged.push_back(b.front());
			b.erase(b.begin());
		}
	}

	std::vector<int>::iterator it;
	if (a.size()) {
		for (it = a.begin(); it != a.end(); it++)
			merged.push_back(*it);
	} else {
		for (it = b.begin(); it != b.end(); it++)
			merged.push_back(*it);
	}
	return merged;
}

void	PmergeMe::insertSort(std::vector<int> &v)
{
	if (v.size() < 2) {
		return ;
	}
	std::vector<int>::iterator it = v.begin();
	std::vector<int>::iterator itReverse;
	std::vector<int>::iterator itPrev;
	int tmp;

	for (++it; it != v.end(); it++) {
		tmp = *it;
		for (
			itReverse = it, itPrev = it, itPrev--;
			itReverse != v.begin() && *itPrev > tmp;
			itReverse--, itPrev--
		) {
			*itReverse = *itPrev;
		}
		*itReverse = tmp;
	}
}

// Operator overloading
PmergeMe &PmergeMe::operator=(PmergeMe const &assign)
{
	_list = assign._list;
	_vector = assign._vector;
	return *this;
}