#include <string>
#include <iostream>

int main(void)
{
	std::string s =  "HI THIS IS BRAIN";

	std::string *stringPTR = &s;
	std::string &stringREF = s;


	std::cout << &s << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << s << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
