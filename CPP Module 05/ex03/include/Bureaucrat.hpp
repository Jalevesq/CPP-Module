#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

using std::string;
using std::cout;
using std::endl;

class AForm;
class Bureaucrat
{

	public:
		Bureaucrat( string newName, int newGrade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		const string& getName() const;
		const int& getGrade() const;

		void 	incrementGrade();
		void 	decrementGrade();
		void 	signForm(AForm &form);
		void	executeForm(AForm const & form);
		Bureaucrat &		operator=( Bureaucrat const & rhs );

		class GradeTooHighException : public std::exception {
			public:
			virtual const char *what() const throw() {
				return ("Bureaucrat's grade is too high");
			}
		};
		class GradeTooLowException : public std::exception {
   			public:
      		virtual const char *what() const throw() {
       	   		return ("Bureaucrat's grade is too low");
       		}
		};

	private:
		Bureaucrat();
		string	_name;
		int 	_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */