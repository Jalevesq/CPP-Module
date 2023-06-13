#include "../include/Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	cout << "[Default Constructor of Brain Called]" << endl;
}

Brain::Brain( const Brain & src )
{
	cout << "[Copy Constructor of Brain Called]" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	cout << "[Destructor of Brain Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if(this != &rhs)
	{
		for (size_t i = 0; i < 100; ++i)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */