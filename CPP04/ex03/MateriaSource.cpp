#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] == NULL)
		{
			if (copy._source[i] != NULL)
				this->_source[i] = copy._source[i]->clone();
			else
				this->_source[i] = NULL;
		}
	}
}


// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL)
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
		if (this->_source[i] == NULL)
		{
			this->_source[i] = materia;
			return ;
		}
	}
}

/*
	Returns a new Materia. The latter is a copy of the Materia previously learned by
	the MateriaSource whose type equals the one passed as parameter. Returns 0 if
	the type is unknown.
*/
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL && this->_source[i]->getType() == type)
			return this->_source[i]->clone();
	}
	return 0;
}

// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL)
			delete this->_source[i];
		if (assign._source[i] != NULL)
			this->_source[i] = assign._source[i]->clone();
	}
	return *this;
}

