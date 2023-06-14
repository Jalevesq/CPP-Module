#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	// cout << "[Default Constructor of AMateria Called]" << endl;
	_materiaType = "None";
}
AMateria::AMateria(const string & type)
{
	// cout << "[Parametric Constructor of AMateria Called]" << endl;
	_materiaType = type;
}

AMateria::AMateria( const AMateria & src )
{
	// cout << "[Copy Constructor of AMateria Called]" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	// cout << "[Destructor of AMateria Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
		this->_materiaType = rhs.getType();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AMateria::use(ICharacter& target) {
	if (this->_materiaType == "ice")
		cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
	else if (this->_materiaType == "cure")
		cout << "* heals " << target.getName() << "'s wounds *" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

string const & AMateria::getType() const {
	return (this->_materiaType);
}


/* ************************************************************************** */