#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
{
	_name = "<No Name>";
	_isSigned = false;
	_gradeToSign = 150;
	_gradeToExecute = 150;
	cout << "[Default Constructor of Form Called]" << endl;
}

Form::Form(string newName, int newGradeToSign, int newGradeToExecute) : _name(newName), _gradeToSign(newGradeToSign), _gradeToExecute(newGradeToExecute)
{
	_isSigned = false;
	if (newGradeToSign > 150 || newGradeToExecute > 150)
		throw (Form::GradeTooLowException());
	if (newGradeToSign < 1 || newGradeToExecute < 1)
		throw (Form::GradeTooHighException());
	cout << "[Parametric Constructor of Form Called]" << endl;
}

Form::Form( const Form & src )
{
	*this = src;
	cout << "[Copy Constructor of Form Called]" << endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	cout << "[Destructor of Form Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_isSigned = rhs.getIsSigned();
		this->_gradeToSign = rhs.getGradeToSign();
		this->_gradeToExecute = rhs.getGradeToExecute();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form Name: " << i.getName() << ", Is Signed: " << i.getIsSigned() << ", Grade to Sign: " << i.getGradeToSign() << ", Grade to Execute: " << i.getGradeToExecute();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat sign) {
	if (sign.getGrade() > this->_gradeToSign)
		throw (Form::GradeTooLowException());
	this->_isSigned = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string& Form::getName() const {
	return (this->_name);
}

const int& Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

const int& Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

const bool& Form::getIsSigned() const {
	return (this->_isSigned);
}

/* ************************************************************************** */