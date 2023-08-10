#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

class Character
{
	public:
		// Constructors
		Character();
		Character(const Character &copy);
		
		// Destructor
		~Character();
		
		// Operators
		Character & operator=(const Character &assign);
		
	private:
		
};

#endif