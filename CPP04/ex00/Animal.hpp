#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		
		// Destructor
		~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);

		// Methods
		void	makeSound(void);
		
	protected:
		std::string	type;

};

#endif