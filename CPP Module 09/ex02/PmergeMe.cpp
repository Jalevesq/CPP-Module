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

void PmergeMe::InsertionSortLowestPairVector(std::vector<int> &bLittle) {
	unsigned int i;
	unsigned int j;

	this->_vec.insert(_vec.begin(), 0);
	bLittle.erase(0);

	i = 0
	while (!bLittle.empty()) {
		j = i;
		if (this->_vec[i] < this->_vec[i - 1])

		i += 2;
	}
}

void PmergeMe::RecursiveSortHighestPairVector(std::vector<int> &aLarge) {
	unsigned int highestIndex;
	int highestNumber;

	if (aLarge.empty() || bLittle.empty())
		return ;

	highestNumber = -2147483648;
	for (unsigned int i = 0; i < aLarge.size(); i++) {
		if (aLarge[i] > highestNumber) {
            highestNumber = aLarge[i];
			highestIndex = i;
        }
	}

	// this->_vec.push_back(bLittle[highestIndex]);
	this->_vec.push_back(aLarge[highestIndex]);

	// bLittle.erase(bLittle.begin() + highestIndex);
	aLarge.erase(aLarge.begin() + highestIndex);
	RecursiveSortHighestPairVector(aLarge);
}

void PmergeMe::sortVector() {
	int lastNumber;
	std::vector<int> aLarge;
	std::vector<int> bLittle;
	bool odd = (_vec.size() % 2 == 1) ? true : false;
	for (unsigned int i = 0; i < _vec.size(); i += 2)
	{
		if (_vec.size() > i + 1) {
			if  (_vec.at(i) > _vec.at(i + 1))
				std::swap(_vec[i], _vec[i + 1]);
			bLittle.push_back(_vec[i]);
			aLarge.push_back(_vec[i + 1]);
		}
	}
	if (odd == true)
		lastNumber = _vec.back();
	_vec.clear();
	RecursiveSortHighestPairVector(aLarge);
	InsertionSortLowestPairVector(bLittle);
	displayVector(_vec);
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
