#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	public:
		PresidentialPardonForm(string newName);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();


		// void beSigned(Bureaucrat sign);
		// void execute(Bureaucrat const& executor);

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:
		PresidentialPardonForm();

};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */