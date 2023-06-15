#include "../include/Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat( string newName, int newGrade)
{
	if (newGrade > 150)
		throw(std::exception());
	if (newGrade < 1)
		throw(std::exception());
	this->_grade = newGrade;
	this->_name = newName;
	cout << "[Default Constrcutor of Bureaucrat]" << endl;
}

Bureaucrat::Bureaucrat()
{
	cout << "[Default Constrcutor of Bureaucrat]" << endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	cout << "[Copy Constrcutor of Bureaucrat]" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	cout << "[Destructor of Bureaucrat]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
		this->_name = rhs.getName();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::incrementGrade() {
	// if grade < 1 throw error
	this->_grade--;
}

void Bureaucrat::decrementGrade() {
	// if grade > 150 throw error
	this->_grade++;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const string& Bureaucrat::getName() const {
	return (this->_name);
}

const int& Bureaucrat::getGrade() const {
	return (this->_grade);
}


/* ************************************************************************** */