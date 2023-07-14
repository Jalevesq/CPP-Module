#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <fstream>
# include <iostream>
# include <string>
# include <map>



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
		BitcoinExchange &		operator=( BitcoinExchange const & rhs );
		// Create method to convert the input file. Parse input file inside of it or in the main?

	private:
		std::map<string, float> _csv_db;

};

// std::ostream &			operator<<( std::ostream & o, BitcoinExchange const & i );

#endif /* ************************************************* BITCOINEXCHANGE_H */