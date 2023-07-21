
#ifndef WEAPON_HPP
# define WEAPON_HPP

// includes
# include <string>
# include <iostream>

class Weapon
{
	private:
		std::string		_type;
	public:
		std::string&	getType();
		void			setType(std::string newType);
		Weapon(std::string wepaon);
};

#endif