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
		void				mergeInsertionSort(int argc, char **argv);

		// Operator overloading
		PmergeMe &operator=(PmergeMe const &assign);

	private:
		std::list<int>		_list;
		std::vector<int>	_vector;

		std::list<int>		mergeInsertionSortList(std::list<int> l);
		std::vector<int>	mergeInsertionSortVector(std::vector<int> v);
		template<typename T>
		T		merge(T a, T b);
		template<typename T>
		void	insertSort(T &v);

};

template<typename T>
T	PmergeMe::merge(T a, T b)
{
	T	merged;

	while (a.size() && b.size()) {
		if (a.front() <= b.front()) {
			merged.push_back(a.front());
			a.erase(a.begin());
		} else {
			merged.push_back(b.front());
			b.erase(b.begin());
		}
	}

	typename T::iterator it;
	if (a.size()) {
		for (it = a.begin(); it != a.end(); it++)
			merged.push_back(*it);
	} else {
		for (it = b.begin(); it != b.end(); it++)
			merged.push_back(*it);
	}
	return merged;
}

template<typename T>
void	PmergeMe::insertSort(T &v)
{
	if (v.size() < 2) {
		return ;
	}
	typename T::iterator it = v.begin();
	typename T::iterator itReverse;
	typename T::iterator itPrev;
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

#endif