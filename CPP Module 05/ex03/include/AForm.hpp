#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Bureaucrat;
class AForm
{

	public:
		AForm();
		AForm(string newName, string newTarget, int newGradeToSign, int newGradeToExecute);
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &		operator=( AForm const & rhs );

		void beSigned(Bureaucrat sign);
		virtual void execute(Bureaucrat const& executor) const = 0;

		const string& getName() const;
		const string& getTarget() const;
		const int& getGradeToSign() const;
		const int& getGradeToExecute() const;
		const bool& getIsSigned() const;

		void setTarget(const string newTarget);
		void setName(const string newName);
		void setGradeToSign(const int newGradeToSign);
		void setGradeToExecute(const int newGradeToExecute);
		void setIsSigned(const bool newIsSigned);
	
		class GradeTooHighException : public std::exception {
			public:
			virtual const char *what() const throw() {
				return ("form requirement grade is too high");
			}
		};
		class GradeTooLowException : public std::exception {
   			public:
      		virtual const char *what() const throw() {
       	   		return ("form requirement grade is too low");
       		}
		};
		class FormNotSignException : public std::exception {
			public:
			virtual const char *what() const throw() {
				return ("Form is not signed");
			}
		};

	private:
		string _target;
		string	_name;
		bool	_isSigned;
		int		_gradeToSign;
		int		_gradeToExecute;


};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

std::ostream &			operator<<( std::ostream & o, AForm const * i );

#endif /* ************************************************************ AFORM_H */