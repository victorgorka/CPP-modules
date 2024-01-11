#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# define CSV "./data.csv"

# include <map>
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <time.h>
# include <cstdlib>
# include <cctype>


class BitcoinExchange
{
	public:
		// Constructors
		BitcoinExchange(const char *file);
		BitcoinExchange(BitcoinExchange const &copy);
		~BitcoinExchange();

		// Methods
		void	compute(const char *input);
		
		// Operator overloading
		BitcoinExchange	&Operator(BitcoinExchange const &assign);

	private:
		// Attributes
		std::map<time_t, float> _dataBase;

		// Private Methods
		void	readCsv(const char *fileName);
		void	printResult();

};

#endif