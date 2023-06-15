#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Exception.hpp"

using std::string;
using std::cout;
using std::endl;

class Bureaucrat
{

	public:
		Bureaucrat( string newName, int newGrade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		const string& getName() const;
		const int& getGrade() const;

		void incrementGrade();
		void decrementGrade();
		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		Bureaucrat();
		string	_name;
		int 	_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */