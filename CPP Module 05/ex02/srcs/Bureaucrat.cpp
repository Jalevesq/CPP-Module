#include "../include/Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(string newName, int newGrade)
{
	if (newGrade > 150)
		throw(Bureaucrat::GradeTooLowException());
	if (newGrade < 1)
		throw(Bureaucrat::GradeTooHighException());
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
	this->_grade--;
	if (this->_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decrementGrade() {
	this->_grade++;
	if (this->_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
		cout << this->_name << " signed " << form.getName() << endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		cout << this->_name << " couldn't sign " << form.getName() << " because: " << e.what() << endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) {
	try {
		if (form.getIsSigned() == false)
			throw(AForm::FormNotSignException());
		else if (form.getGradeToExecute() < _grade)
			throw(Bureaucrat::GradeTooLowException());
		cout << this->_name << " executed " << form.getName() << endl;
		form.execute(*this);
	} catch (Bureaucrat::GradeTooLowException& e) {
		cout << this->_name << " couldn't execute " << form.getName() << " because: " << e.what() << endl;
	} catch (AForm::FormNotSignException& e) {
		cout << this->_name << " couldn't execute " << form.getName() << " because: "<< e.what() << endl;
	}
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