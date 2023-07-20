#include "PmergeMe.hpp"
#include <unistd.h>
void displayVector(std::vector<int> vec) {
	std::vector<int>::iterator it;

	for (it = vec.begin(); it < vec.end(); it++) {
		cout << *it << " ";
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
		this->_vector.push_back(number);	
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

void displayPairVector(std::vector<std::pair<int, int> > pairVector, int n) {
	std::vector<std::pair<int, int> >::iterator pairIteratorVector = pairVector.begin();
	int i = 0;
	while (pairIteratorVector != pairVector.end() && i < n) {
		cout << pairIteratorVector->first << " " << pairIteratorVector->second << endl;
		pairIteratorVector++;
		i++;
	}
}

void PmergeMe::display() {
	std::vector<int>::iterator it = this->_vector.begin();
	for (; it != this->_vector.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

std::vector<std::pair<int, int> > PmergeMe::definePair() {
	std::vector<std::pair<int, int> > pairVector;
	for (unsigned int i = 0; i < this->_vector.size(); i += 2) {
		pairVector.push_back(std::make_pair(_vector[i], _vector[i + 1]));
	}
	return (pairVector);
}

int PmergeMe::extractLastNumberVector() {
	int lastNumber = this->_vector.back();
	this->_vector.pop_back();
	return (lastNumber);
}

void PmergeMe::sortEachPairVector(std::vector<std::pair<int, int> > &pairVector) {
	std::vector<std::pair<int, int> >::iterator it = pairVector.begin();
	for ( ; it != pairVector.end(); it++) {

		if (it->first > it->second) {
			int tmp = it->first;
			it->first =  it->second;
			it->second = tmp;
		}
	}
}

void PmergeMe::insertElementVector(std::vector< std::pair<int, int> > &pairVector, std::pair<int, int> element, int n) {
	if (n < 0)
		pairVector[0] = element;
	else if ( element.second >= pairVector[n].second )
	{
		int size = pairVector.size();
		if ( n == size - 1 )
			pairVector.push_back( element );
		else
			pairVector[n + 1] = element;
	}
	else
	{
		int size = pairVector.size();
		if ( n == size - 1 )
			pairVector.push_back( pairVector[n] );
		else
		{
			pairVector[n + 1] = pairVector[n];
			insertElementVector( pairVector, element, n - 1 );
		}
	}	
} 

void PmergeMe::recursiveSortPairVector(std::vector< std::pair<int, int> > &pairVector, int n) {
	if (n <= 0)
		return ;
	recursiveSortPairVector(pairVector, n - 1);
	insertElementVector(pairVector, pairVector[n], n - 1);
}

void PmergeMe::insertPendElementVector(std::vector<std::pair<int, int> >& pairVector) {
    std::vector<std::pair<int, int> >::iterator itPair = pairVector.begin();
    std::vector<int> pending;

    for (; itPair != pairVector.end(); itPair++) {
        pending.push_back(itPair->first);
        this->_vector.push_back(itPair->second);
    }

    std::vector<int>::iterator it = pending.begin();
    std::vector<int>::iterator itt;
    for (; it != pending.end(); it++) {
        // Find the correct position to insert the element in _unsortedVector using lower_bound
        itt = std::lower_bound(this->_vector.begin(), this->_vector.end(), *it);

        // Insert the element into _unsortedVector
        this->_vector.insert(itt, *it);
    }
}

void PmergeMe::sortVector() {
	int lastNumber;
	bool isOdd = (_vector.size() % 2 == 1) ? true : false;
	std::vector< std::pair<int, int> > pairVector;

	if (isOdd)
		lastNumber = extractLastNumberVector();
	pairVector = definePair();
	sortEachPairVector(pairVector);
	recursiveSortPairVector(pairVector, pairVector.size() - 1);
    _vector.clear();
	insertPendElementVector(pairVector);
	displayVector(this->_vector);
	// if (isOdd)
	// 	insertLastNumber(lastNumber);
   
}


// void PmergeMe::sortOtherContainer() {
//
// }

void PmergeMe::sort() {
	sortVector();
	// sortOtherContainer;
	// display();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
