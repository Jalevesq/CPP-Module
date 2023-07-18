#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN(string RPN) : _RPN(RPN){
	// cout << "Paramtric Constructor of RPN Called" << endl;
}

RPN::RPN()
{
}

RPN::RPN( const RPN & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN &				RPN::operator=( RPN const & rhs )
{
	if ( this != &rhs )
	{
		this->_RPN = rhs._RPN;
		this->_container = rhs._container;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, RPN const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

bool isValid(string arg) {
	if (arg.find_first_not_of("0123456789*/+-") != std::string::npos
		|| arg.length() > 1) {
		return (false);
	}
	return (true);
}

void RPN::makeCalcul(int nbr[2], string arg) {
	char operation = arg.at(0);
	int result;
	if (nbr[0] == 0 && operation == '/') {
		cerr << "Error: " << "division by 0:  " << nbr[1] << " / " << nbr[0] << endl;
		exit(EXIT_FAILURE);
	}
	switch (operation) {
		case '/':
		result = nbr[1] / nbr[0];
		break;

		case '*':
		result = nbr[1] * nbr[0];
		break;

		case '+':
		result = nbr[1] + nbr[0];
		break;

		case '-':
		result = nbr[1] - nbr[0];
		break;

		default:
			throw std::runtime_error("Operator not recognize in makeCalcul");
	}
	this->_container.push(result);
}

bool RPN::iterateRPN(string arg) {
	int nbr[2];
	if (arg.find_first_of("/*+-") != std::string::npos) {
		for (int i = 0; i < 2; i++) {
			if (this->_container.empty())
				return (false);
			nbr[i] = this->_container.top();
			this->_container.pop();
		}
		makeCalcul(nbr, arg);
	} else {
		int integer = std::stoi(arg);
		this->_container.push(integer);
	}
	return (true);
}

void RPN::calculate() {
	string arg;
	std::istringstream iss(this->_RPN);
	while (getline(iss, arg, ' ')) {
		if (!isValid(arg)) {
			cerr << "Error: '" << arg << "' is not a valid argument" << endl;
			return ;
		} else if (!iterateRPN(arg)) {
			cerr << "Error: " << this->_RPN << " is not a valid RPN" << endl;
			return ;
		}
	}
	if (this->_container.size() > 1) {
		cerr << "Error: " << this->_RPN << " is not a valid RPN" << endl;
		return;
	}
	cout << "The result is " << this->_container.top() << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */