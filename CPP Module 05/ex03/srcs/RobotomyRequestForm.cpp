#include "../include/RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(string newName, string newTarget) : AForm(newName, newTarget, 72, 45)
{
	// cout << "[Parametric Constructor of RobotomyRequestForm Called]" << endl;
}

RobotomyRequestForm::RobotomyRequestForm()
{
	// cout << "[Default Constructor of RobotomyRequestForm Called]" << endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
	// cout << "[Copy Constructor of RobotomyRequestForm Called]" << endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	// cout << "[Destructor of RobotomyRequestForm Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	cout << "Vrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr..." << endl;
	std::srand(std::time(0));
	int random = rand() % 2;

	if (random == 0)
		cout << AForm::getTarget() << " has been robotomized correctly" << endl;
	else if (random == 1)
		cout << AForm::getTarget() << " robotomy has failed!" << endl;
	else
		cout << executor.getName() << " did something wrong.. nothing is happenning. (error)" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */