#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}

// Methods
void	WrongAnimal::makeSound() const
{
	if (!this->type.compare("WrongCat"))
		std::cout << "WrongMeow, WrongMeow\n";
}

std::string WrongAnimal::getType() const { return type;}

// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	(void) assign;
	return *this;
}

