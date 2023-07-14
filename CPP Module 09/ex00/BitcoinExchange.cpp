#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
	// cout << "Default Constructor of BitcoinExchange Called" << endl;
	std::ifstream file("data.csv");
	string line;

	if (!file.good()) {
		throw std::runtime_error("Database (data.csv) does not exist or can't be open");
	}
	// Parsing... throw error if it does not respect format.
	
	std::getline(file, line);
	if ("date,exchange_rate" != line)
		throw std::runtime_error("File does not start with header: date,exchange_rate");
	while (std::getline(file, line))
	// file.close();
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src )
{
	// cout << "Copy Constructor of BitcoinExchange Called" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
	// cout << "Default Destructor of BitcoinExchange Called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &				BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	if ( this != &rhs )
	{
		this->_csv_db = rhs._csv_db;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, BitcoinExchange const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */