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
	std::vector<int> v = {8, 4, 5, 9 , 9};
	PmergeMe sequence = PmergeMe();
	std::vector<int> result = sequence.mergeSort(v);
	
	std::vector<int>::iterator it;
	for (it = result.begin(); it != result.end(); it++)
		std::cout << *it << " ";
}