#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

	public:
		RobotomyRequestForm(string newName);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		// void beSigned(Bureaucrat sign);
		// void execute(Bureaucrat const& executor);
	
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:
		RobotomyRequestForm();

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */