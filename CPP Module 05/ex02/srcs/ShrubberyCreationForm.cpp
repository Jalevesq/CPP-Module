#include "../include/ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(string newName, string newTarget) : AForm(newName, newTarget, 145, 137)
{
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

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    std::ofstream outputFile(AForm::getTarget() + "_shrubbery");
	if (outputFile.is_open() == true) {
		outputFile << "       _-_" << std::endl;
		outputFile << "    /~~   ~~\\" << std::endl;
		outputFile << " /~~         ~~\\" << std::endl;
		outputFile << "{               }" << std::endl;
		outputFile << " \\  _-     -_  /" << std::endl;
		outputFile << "   ~  \\ //  ~" << std::endl;
		outputFile << "_- -   | | _- _" << std::endl;
		outputFile << "  _ -  | |   -_" << std::endl;
		outputFile << "      // \\\\" << std::endl;
		outputFile.close();
	} else {
    	std::cerr << executor.getName() << " failed to create shrubbery file. (System error?)" << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */