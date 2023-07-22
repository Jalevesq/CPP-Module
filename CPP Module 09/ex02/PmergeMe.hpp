#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>
# include <ctime>
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
		PmergeMe();

		// Function for vector algorithm
		std::vector<std::pair<int, int> > definePairVector();
		void	sortEachPairVector(std::vector<std::pair<int, int> > &pairVector);
		int		extractLastNumberVector();
		void	recursiveSortPairVector(std::vector< std::pair<int, int> > &pairVector, int n);
		void	insertElementVector(std::vector< std::pair<int, int> > &pairVector, std::pair<int, int> element, int n );
		void	insertPendElementVector(std::vector< std::pair<int, int> > &pairVector);
		void	insertLastNumberVector(int lastNumber);

		// Function for list algorithm
		void	sortList();
		int		extractLastNumberList();
		std::list<std::pair<int, int> > definePairList();
		void sortEachPairList(std::list<std::pair<int, int> > &pairList);
		void recursiveSortPairList(std::list< std::pair<int, int> > &pairList, int n);
		void insertElementList(std::list< std::pair<int, int> > &pairList, std::pair<int, int> element, int n);
		void insertPendElementList(std::list< std::pair<int, int> >& pairList);
		void insertLastNumberList(int lastNumber);


		// Variable
		double _timeSortVector;
		double _timeSortList;
		std::list<int> _list;
		std::vector<int> _vector;		

};

// std::ostream &			operator<<( std::ostream & o, PmergeMe const & i );

#endif /* ******************************************************** PMERGEME_H */