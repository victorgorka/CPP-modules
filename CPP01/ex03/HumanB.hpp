#ifndef HUMANB_HPP
# define HUMANB_HPP

// includes
# include "Weapon.hpp"
# include <iostream>

class	HumanB
{
	private:
		Weapon		*weapon;
		std::string	_name;
	public:
		void		attack();
		void		setWeapon(Weapon&);
		HumanB(std::string name);
} ;

#endif