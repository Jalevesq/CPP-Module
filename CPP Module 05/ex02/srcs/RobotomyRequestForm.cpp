#include "../include/RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(string newName)
{
	AForm::setName(newName);
	AForm::setGradeToSign(72);
	AForm::setGradeToExecute(45);
	cout << "[Parametric Constructor of RobotomyRequestForm Called]" << endl;
}

RobotomyRequestForm::RobotomyRequestForm()
{
	cout << "[Default Constructor of RobotomyRequestForm Called]" << endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
	cout << "[Copy Constructor of RobotomyRequestForm Called]" << endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	cout << "[Destructor of RobotomyRequestForm Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

// void RobotomyRequestForm::beSigned(Bureaucrat sign) {
// 	if (sign.getGrade() > AForm::getGradeToSign())
// 		throw (AForm::GradeTooLowException());
// 	AForm::setIsSigned(true);
// }
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */