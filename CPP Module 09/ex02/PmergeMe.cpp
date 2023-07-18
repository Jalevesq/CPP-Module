#include "PmergeMe.hpp"

void displayVector(std::vector<int> vec) {
	// std::vector<int>::iterator it;

	// for (it = vec.begin(); it < vec.end(); it++) {
	// 	cout << *it << endl;
	// }

	for (unsigned int i = 0; i < vec.size(); i++) {
		if (i % 2 == 0 && i != 0)
			cout << endl;
		cout << vec.at(i) << " ";
	}
	cout << endl;
}


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe() {
	cout << "Default constructor called" << endl;
}

PmergeMe::PmergeMe(char **av) {
	int number;
	for (int i = 1; av[i]; i++) {
		number = std::stoi(av[i]);
		this->_vec.push_back(number);	
	}

	// Also fill the second vector
}

// PmergeMe::PmergeMe( const PmergeMe & src )
// {
// }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// PmergeMe &				PmergeMe::operator=( PmergeMe const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, PmergeMe const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void PmergeMe::display() {

}

void PmergeMe::sortVector() {
	std::vector<int> a;
	std::vector<int> b;

	for (unsigned int i = 0; i < _vec.size(); i += 2)
	{
		if (_vec.at(i) > _vec.at(i + 1))
			std::swap(_vec[i], _vec[i + 1]);
	}
	displayVector(this->_vec);
}

// void PmergeMe::sortOtherContainer() {
//
// }

void PmergeMe::sort() {
	sortVector();
	// sortOtherContainer;
	display();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */