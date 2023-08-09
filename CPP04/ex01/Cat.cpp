#include "Cat.hpp"
#include "Brain.hpp"

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &copy)
{
	*this->brain = *copy.brain;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

// Methods

// Operators
Cat & Cat::operator=(const Cat &assign)
{
	delete this->brain;

	this->brain = new Brain();
	this->setBrain(brain, assign.brain);
	return *this;
}

