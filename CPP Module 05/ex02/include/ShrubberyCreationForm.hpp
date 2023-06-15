#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

using std::string;
using std::cout;
using std::endl;

class ShrubberyCreationForm : public AForm
{

	public:
		ShrubberyCreationForm(string newName);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		void beSigned(Bureaucrat sign);

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

	private:
		ShrubberyCreationForm();

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */