#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main() {

	try{
		// Create a Bureaucrat authorized to sign a tigPardon
		Bureaucrat tigPardonAuthorized("Cerberus", 42);
	
		// Create a AForm with high grade for signing
		AForm	tigPardon("Tig Pardon", 43, 5);
		tigPardonAuthorized.signAForm(tigPardon);
		// Too high grade for signing
		AForm	microwaveRequest("Microwave", 0, 5);
		// Too low level for signing
		AForm	retrocat("retrocat", 151, 5);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
