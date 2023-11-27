#include "Bureaucrat.hpp"

int main() {
	// Create a bureaucrat with a high grade
	Bureaucrat highGradeBureaucrat("John", 1);

	// Create a bureaucrat with a low grade
	Bureaucrat lowGradeBureaucrat("Jane", 150);

	// Try to create a bureaucrat with an invalid grade
	try {
		Bureaucrat invalidGradeBureaucrat("Invalid", 200);
	} catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Try to increment the grade of a bureaucrat with the highest grade
	try {
		highGradeBureaucrat.incrementGrade();
	} catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Try to decrement the grade of a bureaucrat with the lowest grade
	try {
		lowGradeBureaucrat.decrementGrade();
	} catch (std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
