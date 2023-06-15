#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Bureaucrat;
class Form
{

	public:
		Form(string newName, int newGradeToSign, int newGradeToExecute);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		void beSigned(Bureaucrat sign);

		const string& getName() const;
		const int& getGradeToSign() const;
		const int& getGradeToExecute() const;
		const bool& getIsSigned() const;
		class GradeTooHighException : public std::exception {
			public:
			virtual const char *what() const throw() {
				return ("Form: grade is too high");
			}
		};
		class GradeTooLowException : public std::exception {
   			public:
      		virtual const char *what() const throw() {
       	   		return ("Form: grade is too low");
       		}
		};

	private:
		Form();
		string	_name;
		bool	_isSigned;
		int		_gradeToSign;
		int		_gradeToExecute;


};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */