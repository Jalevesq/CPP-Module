#include "../include/ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(string newName)
{
	AForm::setName(newName);
	AForm::setGradeToSign(145);
	AForm::setGradeToExecute(137);
	cout << "[Parametric Constructor of ShrubberyCreationForm Called]" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
	cout << "[Default Constructor of ShrubberyCreationForm Called]" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
	cout << "[Copy Constructor of ShrubberyCreationForm Called]" << endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	cout << "[Destructor of ShrubberyCreationForm Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	// WAS HERE WHEN PUSH. CONTINUE HERE. Cout la classe shrubbery et regarde si les valeurs sont bonne.
	o << "Name";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::beSigned(Bureaucrat sign) {
	if (sign.getGrade() > AForm::getGradeToSign())
		throw (AForm::GradeTooLowException());
	
	AForm::setIsSigned(true);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */