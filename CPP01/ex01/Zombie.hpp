
#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

// include
# include <string>
# include <iostream>

// class
class Zombie
{
private:
	std::string	_name;
public:
	void	announce(void);
	void	setName(std::string name);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif