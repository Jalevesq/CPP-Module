#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm()
{
	_name = "<No Name>";
	_isSigned = false;
	_gradeToSign = 150;
	_gradeToExecute = 150;
	cout << "[Default Constructor of AForm Called]" << endl;
}

AForm::AForm(string newName, int newGradeToSign, int newGradeToExecute) : _name(newName), _gradeToSign(newGradeToSign), _gradeToExecute(newGradeToExecute)
{
	_isSigned = false;
	if (newGradeToSign > 150 || newGradeToExecute > 150)
		throw (AForm::GradeTooLowException());
	if (newGradeToSign < 1 || newGradeToExecute < 1)
		throw (AForm::GradeTooHighException());
	cout << "[Parametric Constructor of AForm Called]" << endl;
}

AForm::AForm( const AForm & src )
{
	*this = src;
	cout << "[Copy Constructor of AForm Called]" << endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	cout << "[Destructor of AForm Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
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

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "AForm Name: " << i.getName() << ", Is Signed: " << i.getIsSigned() << ", Grade to Sign: " << i.getGradeToSign() << ", Grade to Execute: " << i.getGradeToExecute();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// void AForm::beSigned(Bureaucrat sign) {
// 	if (sign.getGrade() > this->_gradeToSign)
// 		throw (AForm::GradeTooLowException());
// 	this->_isSigned = true;
// }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const string& AForm::getName() const {
	return (this->_name);
}

const int& AForm::getGradeToSign() const {
	return (this->_gradeToSign);
}

const int& AForm::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

const bool& AForm::getIsSigned() const {
	return (this->_isSigned);
}

void AForm::setName(const string newName) {
	this->_name = newName;
}

void AForm::setGradeToSign(const int newGradeToSign) {
	this->_gradeToSign = newGradeToSign;
}
void AForm::setGradeToExecute(const int newGradeToExecute) {
	this->_gradeToExecute = newGradeToExecute;
}
void AForm::setIsSigned(const bool newIsSigned) {
	this->_isSigned = newIsSigned;
}

/* ************************************************************************** */