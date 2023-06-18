#include "../include/PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(string newName, string newTarget) : AForm(newName, newTarget, 25, 5)
{
	// cout << "[Parametric Constructor of PresidentialPardonForm Called]" << endl;
}

PresidentialPardonForm::PresidentialPardonForm()
{
	// cout << "[Default Constructor of PresidentialPardonForm Called]" << endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
	// cout << "[Copy Constructor of PresidentialPardonForm Called]" << endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	// cout << "[Destructor of PresidentialPardonForm Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		AForm::setTarget(rhs.getTarget());
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

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	(void)executor;
	cout << AForm::getTarget() << " was forgiven by Zaphod Beeblebrox." << endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */