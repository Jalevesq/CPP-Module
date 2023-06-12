#include "../include/WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	cout << "[Default Constructor of WrongAnimal Called]" << endl;
	this->_type = "<No Wrong Type>";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	cout << "[Copy Constructor of WrongAnimal Called]" << endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	cout << "[Destructor of WrongAnimal Called]" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "Type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound(void) const {
    cout << "<Wrong Animal Sound>" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string& WrongAnimal::getType() const {
    return(this->_type);
}

void WrongAnimal::setType(const string newType) {
    this->_type = newType;
}

/* ************************************************************************** */