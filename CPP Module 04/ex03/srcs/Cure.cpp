#include "../include/Cure.hpp"
#include "../include/AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
	// cout << "[Default Constructor of Cure Called]" << endl;
}

Cure::Cure( const Cure & src )
{
	// cout << "[Copy Constructor of Cure Called]" << endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	// cout << "[Destructor of Cure Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		this->_materiaType = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Cure* Cure::clone() const {
	Cure *newCure = new Cure;
	return (newCure);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */