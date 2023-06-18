#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "AForm.hpp"

# define FormNbr 3

using std::string;
using std::cout;
using std::endl;
class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		AForm* makeForm(string formName, string formTarget);

		Intern &		operator=( Intern const & rhs );

		class FormNotRecognizeException : public std::exception {
			public:
			virtual const char *what() const throw() {
				return ("Form name not recognized.");
			}
		};

	private:

};

#endif /* ********************************************************** INTERN_H */