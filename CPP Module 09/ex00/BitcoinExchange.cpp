#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

bool isValid_n_FillContainer(std::map<string, float> &exchange_db, string &line) {
	struct std::tm parsedTime;
	std::istringstream iss(line);
	string date = "", exchange_rate = "";
	int dotCount = 0;

	std::getline(iss, date, ',');
	std::getline(iss, exchange_rate);
	if (exchange_rate.empty())
		return (false);

	dotCount = std::count(exchange_rate.begin(), exchange_rate.end(), '.');
	if (!strptime(date.c_str(), "%Y-%m-%d", &parsedTime))
		return (false);
	else if (exchange_rate.find_first_not_of("0123456789.") != std::string::npos
		|| dotCount > 1)
		return (false);

	exchange_db[date] = std::stof(exchange_rate);
	return (true);
}

BitcoinExchange::BitcoinExchange()
{
	// cout << "Default Constructor of BitcoinExchange Called" << endl;
	int lineNumber = 2;
	string line;

	std::ifstream file("data.csv");
	if (!file.good()) {
		throw std::runtime_error("Database (data.csv) does not exist or can't be open");
	}

	std::getline(file, line);
	if (line.empty())
		throw std::runtime_error("Database (data.csv) is empty");
	if ("date,exchange_rate" != line)
		throw std::runtime_error("Database (data.csv) does not start with header: date,exchange_rate");
	while (std::getline(file, line)) {
		if (isValid_n_FillContainer(this->_bitcoinExchangeDB, line)) {
			lineNumber++;
		} else {
			throw(std::runtime_error("Invalid Format in database (data.csv) at line " + std::to_string(lineNumber)));
		}
	}
	file.close();
	if (this->_bitcoinExchangeDB.empty()) {
		throw(std::runtime_error("data.csv does not contain any data"));
	}
	std::map<string,float>::iterator it = this->_bitcoinExchangeDB.begin();
	this->_oldestDate = it->first;
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
		this->_bitcoinExchangeDB = rhs._bitcoinExchangeDB;
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

bool BitcoinExchange::isValid(string &date, string &multiplier) {
	int dotCount = 0, dashCount = 0;
	struct std::tm parsedTime;

	// Trim space in multiplier and date
	while (multiplier[0] == ' ')
		multiplier = multiplier.substr(1);
	while (!date.empty() && date.back() == ' ')
		date.pop_back();

	dotCount = std::count(multiplier.begin(), multiplier.end(), '.');
	dashCount = std::count(multiplier.begin(), multiplier.end(), '-');
	if (multiplier.empty() || !strptime(date.c_str(), "%Y-%m-%d", &parsedTime)) {
		cout << "Error: bad input => " << date << endl;
		return (false);
	} else if (dashCount > 0) {
		cout << "Error: not a positive number => " << multiplier << endl; 
		return (false);
	} else if (multiplier.find_first_not_of("0123456789.") != std::string::npos) {
		cout << "Error: not a number => '" << multiplier << "'" << endl;
		return (false);
	} else if (dotCount > 1) {
		cout << "Error: Too many dots in the multiplier => " << multiplier << endl;
		return (false);
	}
	try {
		int multi = std::stoi(multiplier);
		if (multi > 1000) {
			cout << "Error: multiplier is too big (> 1000) => " << multiplier << endl;
			return (false);
		} else if (multi < 0) {
			cout << "Error: multiplier is too small (< 0) => " << multiplier << endl;
			return (false);
		}
	} catch (std::out_of_range &e) {
		cout << "Error: can't convert multipier to int => " << multiplier << endl;
		return (false);
	}

	// Check if it's a date older than what the database contain.
  	std::tm date1, date2;
    std::istringstream dateStream1(this->_oldestDate);
    std::istringstream dateStream2(date);

    dateStream1 >> std::get_time(&date1, "%Y-%m-%d");
    dateStream2 >> std::get_time(&date2, "%Y-%m-%d");

    std::time_t date1_time = std::mktime(&date1);
    std::time_t date2_time = std::mktime(&date2);

    if (date1_time > date2_time) {
        cout << "Error: there is no data available prior to (or on) => " << date << std::endl;
		return (false);
    }
 	return (true);	
}

void BitcoinExchange::printExchange(const string date, const string &multiplier) {
	struct std::tm parsedTime;
	string convertedDate(date);

	while (this->_bitcoinExchangeDB.find(convertedDate) == this->_bitcoinExchangeDB.end()) {
		strptime(convertedDate.c_str(), "%Y-%m-%d", &parsedTime);
		if (parsedTime.tm_mday > 0)
			parsedTime.tm_mday--;
		else if (parsedTime.tm_mon + 1 > 1) {
			parsedTime.tm_mday = 31;
			parsedTime.tm_mon -= 1;
		} else if (parsedTime.tm_year + 1900 > 2008) {
			parsedTime.tm_mday = 31;
			parsedTime.tm_mon = 11;
			parsedTime.tm_year -= 1;
		} else {
			cout << "Error: Bitcoin was not created at this date." << endl; 
			return ;
		}
		char buffer[11];
		strftime(buffer, sizeof(buffer), "%Y-%m-%d", &parsedTime);
		convertedDate = buffer;
	}
	float exchangeRate = this->_bitcoinExchangeDB[convertedDate];
    float result = exchangeRate * std::stof(multiplier);

	std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << result;
    std::string formattedResult = oss.str();

    if (!formattedResult.empty() && formattedResult.back() == '0') {
        formattedResult.pop_back();
    }
    cout << date << " => " << multiplier << " = " << formattedResult << endl;
}

void BitcoinExchange::convertWithInput(string inputFilename) {
	string line, date, multiplier;
	std::ifstream fs(inputFilename);
	if (!fs.good())
		throw std::runtime_error("Can't open input file");
	getline(fs, line);
	if (line != "date | value")
		throw (std::runtime_error("No header in input.txt: date | value"));
	while(getline(fs, line)) {
		date = "";
		multiplier = "";
		std::istringstream iss(line);
		std::getline(iss, date, '|');
		std::getline(iss, multiplier);
		if (!isValid(date, multiplier))
			continue;
		else
			BitcoinExchange::printExchange(date, multiplier);
	}
	fs.close();
}

void BitcoinExchange::printDatabase() {
	    std::map<std::string, float>::iterator iter;
    for (iter = this->_bitcoinExchangeDB.begin(); iter != this->_bitcoinExchangeDB.end(); ++iter)
        std::cout << iter->first << ", " << std::fixed << std::setprecision(2) << iter->second << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */