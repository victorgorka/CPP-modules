#include "easyfind.hpp"

int main(void)
{
	std::vector<int> nums;
	for (int i = 0; i < 10; i++)
		nums.push_back(i);
	try
	{
		::easyfind(nums, 6);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}