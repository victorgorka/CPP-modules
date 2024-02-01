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
static bool	checkNum(char *num)
{
	for (int i = 0; num[i] != '\0'; i++) {
		if (!std::isdigit(num[i])) {
			return false;
		}
	}
	return true;
}

bool			PmergeMe::proccessInput(int argc, char **argv)
{
	int num;

	for (int i = 1; i < argc; i++) {
		if (checkNum(argv[i]) && std::atol(argv[i]) < std::numeric_limits<int>::max()) {
			num = std::atol(argv[i]);
			_list.push_back(num);
			_vector.push_back(num);
		}
		else {
			return false;
		}
	}
	return true;
}

void			PmergeMe::mergeInsertionSort(int argc, char **argv)
{
	std::vector<int>	vectorResult;
	std::list<int>		listResult;

	if (!proccessInput(argc, argv)) {
		std::cout << "Error" << std::endl;
	} else {
		// Medir tiempo vector
		vectorResult = mergeInsertionSortVector(_vector);
		// Medir tiempo list
		listResult = mergeInsertionSortList(_list);

		std::cout << "Before: ";
		for (int i = 1; i < argc; i++) {
			std::cout << argv[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "After (vector): ";
		std::vector<int>::iterator itV;
		for (itV = vectorResult.begin(); itV != vectorResult.end(); itV++) {
			std::cout << *itV << " ";
		}
		std::cout << std::endl;
		std::cout << "After (list): ";
		std::list<int>::iterator itL;
		for (itL = listResult.begin(); itL != listResult.end(); itL++) {
			std::cout << *itL << " ";
		}
		std::cout << std::endl;
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