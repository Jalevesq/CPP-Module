#include "../include/PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
PresidentialPardonForm::PresidentialPardonForm(string newName)
{
	AForm::setName(newName);
	AForm::setGradeToSign(25);
	AForm::setGradeToExecute(5);
	cout << "[Parametric Constructor of PresidentialPardonForm Called]" << endl;
}

PresidentialPardonForm::PresidentialPardonForm()
{
	cout << "[Default Constructor of PresidentialPardonForm Called]" << endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
	cout << "[Copy Constructor of PresidentialPardonForm Called]" << endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	cout << "[Destructor of PresidentialPardonForm Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		AForm::setName(rhs.getName());
		AForm::setGradeToSign(rhs.getGradeToSign());
		AForm::setGradeToExecute(rhs.getGradeToExecute());
		AForm::setIsSigned(rhs.getIsSigned());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::beSigned(Bureaucrat sign) {
	if (sign.getGrade() > AForm::getGradeToSign())
		throw (AForm::GradeTooLowException());
	AForm::setIsSigned(true);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */