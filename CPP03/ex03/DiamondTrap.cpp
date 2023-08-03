#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap()
{
	std::cout << "\e[0;33mDefault Constructor called of DiamondTrap\e[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "\e[0;31mDiamondTrap\e[0m "<< name << " \e[0;31mconstructor called\e[0m\n";
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	_hitP = FragTrap::getHitP();
	_energyP = 50;
	_attackD = FragTrap::getAttackD();
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of ScavTrap\e[0m" << std::endl;
}


// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[0;31mDiamondTrap\e[0m "<< this->_name << " \e[0;31mdestructor called\e[0m\n";
}

// Methods
void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);	
}

void			DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap name: " << ClapTrap::_name << " DiamondTrap name: " << _name << std::endl;
}

std::string		DiamondTrap::getName(void){return _name;}
int				DiamondTrap::getHitP(void){return _hitP;}
int				DiamondTrap::getEnergyP(void){return _energyP;}
int				DiamondTrap::getAttackD(void){return _attackD;}

// Operators
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	this->_name = assign._name;
	this->_hitP = assign._hitP;
	this->_energyP = assign._energyP;
	this->_attackD = assign._attackD;
	return *this;
}

