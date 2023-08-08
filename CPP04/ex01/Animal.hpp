#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		
		// Destructor
		virtual ~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);

		// Methods
		void		makeSound(void) const;
		std::string	getType() const;
		void		setBrain(std::string)const;
		void		setBrain(Brain *, const Brain *);
		void		printBrain(void) const;
	protected:
		std::string	type;
		Brain *brain;
};

#endif