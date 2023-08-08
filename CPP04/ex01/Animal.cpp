#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
	brain = new Brain();
}

Animal::Animal(const Animal &copy)
{
	brain = new Brain(*copy.brain);
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}


// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
	delete brain;
}

// Methods
void	Animal::makeSound() const
{
	if (!this->type.compare("Dog"))
		std::cout << "Woof, woof\n";
	else if (!this->type.compare("Cat"))
		std::cout << "Meow, meow\n";
}

std::string Animal::getType() const { return type;}
void		Animal::setBrain(std::string idea) const {this->brain->setIdeas(idea);}
void		Animal::setBrain(Brain *brainA, const Brain *brainB) {this->brain->setIdeas(brainA, brainB);}
void		Animal::printBrain(void) const { this->brain->printIdeas();}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	delete this->brain;

	this->brain = new Brain();
	assign.brain->printIdeas();
	this->setBrain(brain, assign.brain);
	return *this;
}
