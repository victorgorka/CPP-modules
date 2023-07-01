
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
	Zombie();
public:
	void	announce(void);
	Zombie(std::string name);
	~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif