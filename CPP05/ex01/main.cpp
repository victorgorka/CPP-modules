#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	try{
		// Create a Bureaucrat authorized to sign a tigPardon
		Bureaucrat tigPardonAuthorized("Cerberus", 42);
	
		// Create a Form with high grade for signing
		Form	tigPardon("Tig Pardon", 43, 5);
		tigPardonAuthorized.signForm(tigPardon);
		// Too high grade for signing
		Form	microwaveRequest("Microwave", 0, 5);
		// Too low level for signing
		Form	retrocat("retrocat", 151, 5);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
