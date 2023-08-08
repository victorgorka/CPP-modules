#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}

// Methods
void	Brain::setIdeas(std::string idea) 
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

void	Brain::setIdeas(Brain *brainA, const Brain *brainB)
{
	for(int i = 0; i < 100; i++)
		brainA->ideas[i] = brainB->ideas[i];
}

void	Brain::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i];
}


std::string	Brain::getIdea(int i) { return this->ideas[i];}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	std::cout << "holis\n";
	for(int i = 0; i < 100; i++)
		this->ideas[i] = assign.ideas[i];
	return *this;
}

