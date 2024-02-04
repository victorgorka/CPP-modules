#include <deque>
#include "PmergeMe.hpp"

// std::vector<int>	parseInput(int argc, char **input)
// {
// 	return std::vector<int>
// }

void	leak(void)
{
	system("leaks PmergeMe");
}

int main( int argc, char **argv)
{
	(void)argv;
	if (argc < 1) {
		std::cout << "Error" << std::endl;
		return 0;
	}
	PmergeMe sequence = PmergeMe();
	sequence.mergeInsertionSort(argc, argv);
	// atexit(leak);	
	// std::vector<int>::iterator it;
	// for (it = result.begin(); it != result.end(); it++)
	// 	std::cout << *it << " ";
}