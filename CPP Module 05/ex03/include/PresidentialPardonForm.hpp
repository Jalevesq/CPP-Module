#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

using std::string;
using std::cout;
using std::endl;
class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(string newName, string newTarget);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		void execute(Bureaucrat const& executor) const;

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:
		PresidentialPardonForm();
};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */