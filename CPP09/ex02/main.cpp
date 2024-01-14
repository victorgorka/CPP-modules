#include <deque>
#include "PmergeMe.hpp"

// std::vector<int>	parseInput(int argc, char **input)
// {
// 	return std::vector<int>
// }

int main( int argc, char **argv)
{
	(void)argv;
	if (argc < 1) {
		std::cout << "Error" << std::endl;
		return 0;
	}
	{
		std::vector<int> v = {8, 4, 5, 9, 1};
		PmergeMe sequence = PmergeMe();
		std::vector<int> result = sequence.mergeInsertionSortVector(v);
		
		std::vector<int>::iterator it;
		for (it = result.begin(); it != result.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	{
		std::list<int> v = {8, 4, 5, 9, 1};
		PmergeMe sequence = PmergeMe();
		std::list<int> result = sequence.mergeInsertionSortList(v);
		
		std::list<int>::iterator it;
		for (it = result.begin(); it != result.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	// {
	// 	std::deque<int> v = {8, 4, 5, 9, 1};
	// 	PmergeMe sequence = PmergeMe();
	// 	std::deque<int> result = sequence.mergeInsertionSort(v);
		
	// 	std::deque<int>::iterator it;
	// 	for (it = result.begin(); it != result.end(); it++)
	// 		std::cout << *it << " ";
	// 	std::cout << std::endl;
	// }
}