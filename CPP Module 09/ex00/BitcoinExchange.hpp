#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <map>
# include <sstream>
#include <ctime>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

class BitcoinExchange
{

	public:
		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();
		// Create method to convert the input file. Parse input file inside of it or in the main?
		BitcoinExchange &		operator=( BitcoinExchange const & rhs );
		void printDatabase();
		void convertWithInput(string inputFilename);

	private:
		void printExchange(const string date, const string &multiplier);
		std::map<string, float> _bitcoinExchangeDB;

};

// std::ostream &			operator<<( std::ostream & o, BitcoinExchange const & i );

#endif /* ************************************************* BITCOINEXCHANGE_H */