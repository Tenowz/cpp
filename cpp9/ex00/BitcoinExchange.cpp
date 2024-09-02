#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

	std::cout << "BitcoinExchange constructor called !" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &self) {

	*this = self;
	std::cout << "BitcoinExchange copy constructor called !" << std::endl;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &self) {

	if (this != &self) {

		this->btcPrices.clear();
		this->btcPrices = self.btcPrices;
	}
	std::cout << "BitcoinExchange copy assignment called !" << std::endl;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {

	std::cout << "BitcoinExchange destructor called !" << std::endl;
}

bool BitcoinExchange::isValidDate(const std::string &date) {
	
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	int year, month, day;
	year = std::atoi(date.substr(0, 4).c_str());
	month = std::atoi(date.substr(5, 2).c_str());
	day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12 || day < 1 || day > 31)
		return false;

	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;

	if (month == 2) {

		bool isLeap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		
		if (day > 29 || (day == 29 && !isLeap))
			return false;
	}
	return true;
}

void	BitcoinExchange::closestDate(std::string date, float value) {

	std::map<std::string, float>::const_iterator tmp = this->btcPrices.begin();
	
	for (std::map<std::string, float>::const_iterator it = this->btcPrices.begin(); it != this->btcPrices.end(); ++it) {
		
		if (it->first < date)
			tmp = it;
		
		if (it->first > tmp->first)
			break;
	}
	std::cout << std::fixed << std::setprecision(2);
	std::cout << date << " => " << value << " = " << value * tmp->second << " (Closest date value used : " << tmp->first << ")" << std::endl;
}

void	BitcoinExchange::printInfo(std::string date, float value) {
	
	if (value < 0 || value > 1000)
		std::cerr << "Error: invalid number.\n";
	
	else if (!isValidDate(date))
		std::cerr << "Error: invalid date.\n";
	
	else {
		
		for (std::map<std::string, float>::const_iterator it = this->btcPrices.begin(); it != this->btcPrices.end(); ++it) {
			
			if (it->first == date) {
				
				std::cout << std::fixed << std::setprecision(2);
				std::cout << date << " => " << value << " = " << value * it->second << std::endl;
				return;
			}
		}
		closestDate(date, value);
	}
}

void	BitcoinExchange::exchangeRates() {
	
	std::ifstream file("data.csv");
	
	if (!file.is_open()) {
		
		std::cerr << "Error: could not open .csv file." << std::endl;
		return;
	}
	std::string	line;
	std::getline(file, line);
	
	while (std::getline(file, line)) {
		
		size_t	i = line.find(',');
		this->btcPrices[line.substr(0, i)] = strToFloat(line.substr(i + 1));
	}
	file.close();
}

void	BitcoinExchange::exchange(const std::string &input) {
	
	this->exchangeRates();
	std::ifstream file(input.c_str());
	std::string	line;
	std::getline(file, line);
	
	while (std::getline(file, line)) {
		
		size_t i = line.find('|');
		
		if (i == std::string::npos) {
			
			std::cerr << "Error: bad input => " << line.substr(0, i - 1) << std::endl;
			continue;
		}
		std::istringstream	iss(line.substr(i + 2));
		float tmp;
		
		if (!(iss >> tmp))
			std::cerr << "Error: bad input => " << line.substr(i + 2) << std::endl;
		
		else
			this->printInfo(line.substr(0, i - 1), strToFloat(line.substr(i + 2)));
	}
}