#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

class RPN
{

	public:

		RPN(string newRPN);
		RPN( RPN const & src );
		~RPN();
		RPN &		operator=( RPN const & rhs );

		void calculate();
	private:
		void makeCalcul(int nbr[2], string arg);
		bool iterateRPN(string arg);
		string _RPN;
		std::stack<int> _container;
		RPN();

};

// std::ostream &			operator<<( std::ostream & o, RPN const & i );

#endif /* ************************************************************* RPN_H */