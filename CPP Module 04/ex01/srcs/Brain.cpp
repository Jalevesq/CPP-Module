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

// Brain &				Brain::operator=( Brain const & rhs )
// {
// 	if ( this != &rhs )
// 	{
// 		this->_ideas = rhs.getValue();
// 	}
// 	return *this;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */