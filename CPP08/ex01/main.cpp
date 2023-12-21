#include "Span.hpp"

int main(void)
{
	std::cout << "TEST 1" << std::endl;
	{
		std::vector<int> numbers;
		Span set = Span(15);

		numbers.push_back(1);
		numbers.push_back(6);
		numbers.push_back(4);
		numbers.push_back(10);
		numbers.push_back(-43);
		numbers.push_back(-3);
		numbers.push_back(7);
		numbers.push_back(9);
		std::cout << std::endl << "****** Se añaden 8 numeros ******" << std::endl;
		try
		{
			set.addRange(numbers);
			std::cout << "set size: " << set.getNumbers().size() << std::endl;
			std::cout << "shortest span: " << set.shortestSpan() << std::endl;
			std::cout << "longest span: " << set.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "TEST 2" << std::endl;
	{
		Span set = Span(5);

		try
		{
			set.addNumber(6);
			set.addNumber(3);
			set.addNumber(17);
			set.addNumber(9);
			set.addNumber(11);
			std::cout << "shortest span: " << set.shortestSpan() << std::endl;
			std::cout << "longest span: " << set.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}