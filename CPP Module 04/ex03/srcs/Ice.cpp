#include "../include/Ice.hpp"
#include "../include/AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
	// cout << "[Default Constructor of Ice Called]" << endl;
}

Ice::Ice( const Ice & src )
{
	// cout << "[Copy Constructor of Ice Called]" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	// cout << "[Destructor of Ice Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		this->_materiaType = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Ice const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Ice* Ice::clone() const {
	Ice *newIce = new Ice;
	return (newIce);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */