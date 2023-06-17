#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include <ctime> 
# include "AForm.hpp"

using std::string;
using std::cout;
using std::endl;
class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(string newName, string newTarget);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		void execute(Bureaucrat const& executor) const;

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:
		RobotomyRequestForm();

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */