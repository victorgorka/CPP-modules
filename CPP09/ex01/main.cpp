#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Error: no valid input." << std::endl;
		return 0;
	}
	RPN calculator = RPN();
	calculator.computeInput(argv[1]);
	return 0;
}