#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
using std::string;
using std::cout;
using std::endl;

class Form
{

	public:

		Form();
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

	private:
		const string _name;
		bool	isSigned;
		const int requiredToSign;
		const int requiredToExecute;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */