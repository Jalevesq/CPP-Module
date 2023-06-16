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

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

// void ShrubberyCreationForm::beSigned(Bureaucrat sign) {
// 	if (sign.getGrade() > AForm::getGradeToSign())
// 		throw (AForm::GradeTooLowException());
// 	AForm::setIsSigned(true);
// }

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (AForm::getIsSigned() == false)
		throw(AForm::FormNotSignException());
	else if (AForm::getGradeToExecute() < executor.getGrade())
		throw(AForm::GradeTooLowException());
	// create file describe in pdf
	cout << executor.getName() << " executed " << AForm::getName() << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */