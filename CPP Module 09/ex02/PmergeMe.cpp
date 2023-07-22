#include "PmergeMe.hpp"
#include <unistd.h>
void displayVector(std::vector<int> vec) {
	std::vector<int>::iterator it;
	for (it = vec.begin(); it < vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void displayList(std::list<int> list) {
	std::list<int>::iterator it;
	for (it = list.begin(); it != list.end(); it++) {
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
	this->_timeSortList = 0;
	this->_timeSortVector = 0;
	int number;
	int dashCount;
	string sNumber;
	for (int i = 1; av[i]; i++) {
		sNumber = av[i];
		dashCount = std::count(sNumber.begin(), sNumber.end(), '-');
		if (sNumber.find_first_not_of("0123456789-") != string::npos) {
			cout << "Error: '" << sNumber << "' is not a number." << endl;
			exit(EXIT_FAILURE);
		}  else if (dashCount > 0) {
			if (dashCount > 1) {
				cout << "Error: '" << sNumber << "' is not a valid number." << endl;
				exit(EXIT_FAILURE);
			}
			else if (dashCount == 1 && sNumber[0] != '-') {
				cout << "Error: '" << sNumber << "' is not a valid number." << endl;
				exit(EXIT_FAILURE);
			}
		} try {
			number = std::stoi(av[i]);
		} catch (std::exception& e) {
			cout << "Error: " << "can't convert this number into an integer: " << sNumber << endl;
			exit(EXIT_SUCCESS);
		}
		this->_vector.push_back(number);
		this->_list.push_back(number);	
	}
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
	// std::vector<int>::iterator it = this->_vector.begin();
	// for (; it != this->_vector.end(); it++) {
	// 	cout << *it << " ";
	// }
	// cout << endl;
}


//////////////////////////////////////////
//			Sort Vector Function        //
//////////////////////////////////////////

std::vector<std::pair<int, int> > PmergeMe::definePairVector() {
	std::vector<std::pair<int, int> > pairVector;
	for (unsigned int i = 0; i < this->_vector.size(); i += 2) {
		pairVector.push_back(std::make_pair(_vector[i], _vector[i + 1]));
	}
	return (pairVector);
}

void PmergeMe::insertLastNumberVector(int lastNumber) {
    std::vector<int>::reverse_iterator it = _vector.rbegin();
    for (; it != _vector.rend(); it++) {
        if (lastNumber >= *it) {
 			_vector.insert(it.base(), lastNumber); // Insert before the current position
            return;
        }
    }

    // If the loop completes, it means the lastNumber is the largest,
    // so insert it at the beginning of the vector.
    _vector.insert(_vector.begin(), lastNumber);
}

int PmergeMe::extractLastNumberVector() {
	int lastNumber = this->_vector.back();
	this->_vector.pop_back();
	return (lastNumber);
}

void PmergeMe::sortEachPairVector(std::vector<std::pair<int, int> > &pairVector) {
    std::vector<std::pair<int, int> >::iterator it;
    for (it = pairVector.begin(); it != pairVector.end(); ++it) {
        if (it->first > it->second) {
            std::swap(it->first, it->second);
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

bool compareInt(int a, int b) {
    return a < b;
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
        // Find the correct position to insert the element in _vector
		itt = std::lower_bound(_vector.begin(), _vector.end(), *it, compareInt);
        this->_vector.insert(itt, *it);
    }
}



void PmergeMe::sortVector() {
	int lastNumber;
	bool isOdd = (_vector.size() % 2 == 1) ? true : false;
	std::vector< std::pair<int, int> > pairVector;

	if (isOdd)
		lastNumber = extractLastNumberVector();
	pairVector = definePairVector();
	sortEachPairVector(pairVector);
	recursiveSortPairVector(pairVector, pairVector.size() - 1);
    _vector.clear();
	insertPendElementVector(pairVector);
	if (isOdd)
		insertLastNumberVector(lastNumber);   
}

///////////////////////////////////////////////////////////////

//////////////////////////////////////////
//			Sort List Function          //
//////////////////////////////////////////

void displayPairList(std::list<std::pair<int, int> > pairList) {
    std::list<std::pair<int, int> >::iterator it;
    for (it = pairList.begin(); it != pairList.end(); ++it) {
        std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
    }
}

int PmergeMe::extractLastNumberList() {
	int lastNumber = this->_list.back();
	this->_list.pop_back();
	return (lastNumber);
}

std::list<std::pair<int, int> > PmergeMe::definePairList() {
	std::list<std::pair<int, int> > pairList;
    for (std::list<int>::iterator it = _list.begin(); it != _list.end(); std::advance(it, 2)) {
            pairList.push_back(std::make_pair(*it, *std::next(it)));
    }
	return (pairList);
}

void PmergeMe::sortEachPairList(std::list<std::pair<int, int> > &pairList) {
    std::list<std::pair<int, int> >::iterator it;
    for (it = pairList.begin(); it != pairList.end(); ++it) {
        if (it->first > it->second) {
            std::swap(it->first, it->second);
        }
    }
}

void PmergeMe::insertElementList(std::list<std::pair<int, int> >& pairList, std::pair<int, int> element, int n) {
    if (n < 0) {
        *pairList.begin() = element;
    } else {
		int size = pairList.size();
        std::list<std::pair<int, int> >::iterator it = pairList.begin();
        std::advance(it, n);
		std::list<std::pair<int, int> >::iterator next_it = it;
		++next_it;

        if (element.second >= it->second) {
            if (n == size - 1) {
                pairList.push_back(element);
            } else {
				*next_it = element;
            }
        } else {
			if (n == size - 1)
				pairList.push_back(*it);
			else {
				*next_it = *it;
				insertElementList(pairList, element, n - 1);
			}
		}
    }
}
void PmergeMe::recursiveSortPairList(std::list<std::pair<int, int> >& pairList, int n) {
    if (n <= 0)
        return;
    std::list<std::pair<int, int> >::iterator it = pairList.begin();
    std::advance(it, n);
    recursiveSortPairList(pairList, n - 1);
    insertElementList(pairList, *it, n - 1);
}

void PmergeMe::insertPendElementList(std::list<std::pair<int, int> > &pairList) {
    std::list<std::pair<int, int> >::iterator itPair = pairList.begin();
    std::list<int> pending;

    for (; itPair != pairList.end(); itPair++) {
        pending.push_back(itPair->first);
        this->_list.push_back(itPair->second);
    }

    std::list<int>::iterator it = pending.begin();
    std::list<int>::iterator itt;
    for (; it != pending.end(); it++) {
        // Find the correct position to insert the element in _vector
		itt = std::lower_bound(_list.begin(), _list.end(), *it, compareInt);
        this->_list.insert(itt, *it);
    }
}

void PmergeMe::insertLastNumberList(int lastNumber) {
    std::list<int>::reverse_iterator it = _list.rbegin();
    for (; it != _list.rend(); it++) {
        if (lastNumber >= *it) {
 			_list.insert(it.base(), lastNumber); // Insert before the current position
            return;
        }
    }

    _list.insert(_list.begin(), lastNumber);
}

void PmergeMe::sortList() {
	int lastNumber;
	bool isOdd = (_list.size() % 2 == 1) ? true : false;
	std::list< std::pair<int, int> > pairList;
	if (isOdd)
		lastNumber = extractLastNumberList();
	pairList =  definePairList();
	sortEachPairList(pairList);
	recursiveSortPairList(pairList, pairList.size() - 1);
	_list.clear();
	insertPendElementList(pairList);
	if (isOdd)
		insertLastNumberList(lastNumber);
}

///////////////////////////////////////////////////////////////

void PmergeMe::sort() {
	clock_t start_time;
	clock_t end_time;

	// Make a function to check if it is already sorted ?

	cout << "Before: ";
	displayVector(this->_vector);

	start_time = clock();
	sortVector();
    end_time = clock();
	this->_timeSortVector = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000000;

	start_time = clock();
	sortList();
	end_time = clock();
	this->_timeSortList =  static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000000;

	cout << "After: ";
	displayVector(this->_vector);
	cout << "Time to process a range of " << this->_vector.size() << " elements with std::vector : " << this->_timeSortVector << " us" << endl;
	cout << "Time to process a range of " << this->_list.size() << " elements with std::list : " << this->_timeSortList << " us" << endl;

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
