#ifndef HUMANA_HPP
# define HUMANA_HPP

// includes
# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
	private:
		Weapon		*weapon;
		std::string	_name;
	public:
		void		attack();
		HumanA(std::string name, Weapon &weapon);
} ;

#endif