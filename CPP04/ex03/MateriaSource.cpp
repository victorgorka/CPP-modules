#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of MateriaSource\e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] == NULL)
		{
			if (copy._source[i] != NULL)
				this->_source[i] = copy._source[i]->clone();
		}
	}
}


// Destructor
MateriaSource::~MateriaSource()
{
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _source[i];
	}
}

// Methods

/*
	Copies the Materia passed as a parameter and store it in memory so it can be cloned
	later. Like the Character, the MateriaSource can know at most 4 Materias. They
	are not necessarily unique.
*/
void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i] == NULL)
			this->source[i] = materia._inventory[i]->clone();
	}
}

/*
	Returns a new Materia. The latter is a copy of the Materia previously learned by
	the MateriaSource whose type equals the one passed as parameter. Returns 0 if
	the type is unknown.
*/
AMateria* MateriaSource::createMateria(std::string const & type)
{

}

// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL)
			delete this->_source[i];
		if (copy._source[i] != NULL)
			this->_source[i] = copy._source[i]->clone();
	}
	return *this;
}

