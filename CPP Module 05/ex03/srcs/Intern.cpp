#include "../include/Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	cout << "[Default Constructor of Intern Called]" << endl;
}

Intern::Intern( const Intern & src )
{
	cout << "[Copy Constructor of Intern Called]" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	cout << "[Destructor of Intern Called]" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm* Intern::makeForm(string formName, string formTarget) {
	int		index = 0;
	AForm	*newForm = nullptr;
	string	formRealName; 

	// typedef AForm* (*FormConstructor)(string newName, string newTarget);

	// FormConstructor constructors[] = {

	// };

	string _formName[] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};


	for (int i = 1; i < FormNbr + 1; i++)
	{
		if (_formName[i - 1] == formName)
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
		case 1:
		{
			newForm = new RobotomyRequestForm(formName, formTarget);
			formRealName = "RobotomyRequestForm";
			break;
		}
		case 2:
		{
			newForm  = new PresidentialPardonForm(formName, formTarget);
			formRealName = "PresidentialPardonForm";
			break;
		}
		case 3:
		{
			newForm = new ShrubberyCreationForm(formName, formTarget);
			formRealName = "ShrubberyCreationForm";
			break;
		}
		default:
		{
			cout << formName << "'s Form is not recognized. Please enter one of the valid name below: " << endl;
			for (int i = 0; i < FormNbr; i++)
				cout << "- "<<_formName[i] << endl;
			throw(FormNotRecognizeException());
		}
	}
	if (newForm != nullptr)
	{
		cout << "Intern creates " << formRealName << endl;
		return (newForm);
	}
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */