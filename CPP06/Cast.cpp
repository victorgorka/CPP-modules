#include "Cast.hpp"

// Constructors
Cast::Cast()
{
	std::cout << "\e[0;33mDefault Constructor called of Cast\e[0m" << std::endl;
}

Cast::Cast(const Cast &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cast\e[0m" << std::endl;
}


// Destructor
Cast::~Cast()
{
	std::cout << "\e[0;31mDestructor called of Cast\e[0m" << std::endl;
}


// Operators
Cast & Cast::operator=(const Cast &assign)
{
	(void) assign;
	return *this;
}

// Methods
