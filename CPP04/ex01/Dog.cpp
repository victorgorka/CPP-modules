#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	*this->brain = *copy.brain;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

// Operators
Dog & Dog::operator=(const Dog &assign)
{
	delete this->brain;

	this->brain = new Brain();
	this->setBrain(brain, assign.brain);
	return *this;
}

