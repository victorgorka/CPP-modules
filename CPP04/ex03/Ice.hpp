#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class AMateria;
class ICharacter;

class Ice : public AMateria
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);
		
		// Destructor
		~Ice();
		
		// Operators
		Ice &operator=(const Ice &assign);
		
		// Methods
		AMateria *clone();
		// virtual void use(ICharacter& target);

};

#endif