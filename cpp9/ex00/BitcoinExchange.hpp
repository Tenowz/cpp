#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <iostream>

# define dataBase "data.csv"

class BitcoinExchange : public std::map<std::string, unsigned long long> {

	private:

		std::map<std::string, float>	btcPrices;

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &self);
		BitcoinExchange	&operator=(BitcoinExchange const &self);
		~BitcoinExchange();

		void	exchangeRates();
		void	exchange(const std::string &input);
		bool	isValidDate(const std::string &date);
		void	printInfo(std::string date, float value);
		void	closestDate(std::string date, float value);
};

float	strToFloat(std::string str);

#endif