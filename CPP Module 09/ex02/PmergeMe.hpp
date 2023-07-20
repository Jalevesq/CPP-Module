#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
using std::cout;
using std::endl;
using std::cerr;
using std::string;

class PmergeMe
{

	public:
		PmergeMe(char **av);
		// PmergeMe( PmergeMe const & src );
		~PmergeMe();
		void sort();
		void sortVector();
		void display();
		// void sortOtherContainer;

		// PmergeMe &		operator=( PmergeMe const & rhs );

	private:
		//Function for vector algorithm
		std::vector<std::pair<int, int> > definePair();
		void sortEachPairVector(std::vector<std::pair<int, int> > &pairVector);
		int extractLastNumberVector();
		void recursiveSortPairVector(std::vector< std::pair<int, int> > &pairVector, int n);
		void insertElementVector(std::vector< std::pair<int, int> > &pairVector, std::pair<int, int> element, int n );
		void insertPendElementVector(std::vector< std::pair<int, int> > &pairVector);
		void insertLastNumber(int lastNumber);

		// uint_64_t timeSortVector;
		// uint_64_t timeSortOtherContainer;
		PmergeMe();
		//std::OtherContainer<int> _otherContainer
		std::vector<int> _vector;		

};

// std::ostream &			operator<<( std::ostream & o, PmergeMe const & i );

#endif /* ******************************************************** PMERGEME_H */