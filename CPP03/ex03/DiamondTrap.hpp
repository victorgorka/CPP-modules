#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		// Constructors
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(std::string name);
		
		// Destructor
		~DiamondTrap();
		
		// Operators
		DiamondTrap & operator=(const DiamondTrap &assign);

		// Methods
		void			attack(const std::string &target);
		void			whoAmI(void);
		std::string		getName(void);
		int				getHitP(void);
		int				getEnergyP(void);
		int				getAttackD(void);
		
	private:
		DiamondTrap();
		std::string _name;
};

#endif