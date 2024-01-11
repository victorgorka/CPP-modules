#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange(const char *file)
{
	readCsv(file);
}


BitcoinExchange::~BitcoinExchange() {}

// Methods
time_t	parseDate(std::string const &sTime)
{
	struct tm time;

	memset(&time, 0, sizeof(tm));
	if (strptime(sTime.c_str(), "%Y-%m-%d", &time) == NULL) {
		return 0;
	}
	else
		return mktime(&time);
}

int		usefulIsDigit(std::string number)
{
	unsigned long	i = 0;
	bool			sign = false;
	bool 			comaFlag = false;

	if (number[0] == '-' || number[0] == '+'){
		i++;
		sign = 1;
	}
	for (; i < number.size(); i++){
		if (comaFlag == false && number[i] == '.'
			&& i < number.size() - 1 && i != 0){
			if (i == 1 && sign == true)
				return 0;
			comaFlag = true;
		} else if (!std::isdigit(number[i]))
			return 0;
	}
	return 1;
}

void	BitcoinExchange::readCsv(const char *fileName)
{
	time_t			date;
	float			bt;
	std::string		line;
	std::ifstream	file(fileName);

	// Fill map with csv database
	while (std::getline(file, line)) {
		date = parseDate(line.substr(0, line.find(',')));
		bt = std::atof(line.substr(line.find(',')).c_str() + 1);
		_dataBase[date] = bt;
	}
	// printResult();
}

void	BitcoinExchange::compute(const char *input)
{
	time_t			date;
	float			value;
	std::string		line;
	std::ifstream	file(input);
	std::map<time_t, float>::iterator it;

	std::getline(file, line);
	while (std::getline(file, line)){
		it = _dataBase.begin();
		if ((date = parseDate(line.substr(0, line.find(' ')))) == 0){
			std::cout << "Error: bad input => "
				<< line.substr(0, line.find(' ')) << std::endl;
		} else if (!usefulIsDigit(line.substr(line.find('|') + 2))){
			std::cout << "Error: NaN" << std::endl;
		} else if ((value = std::atof(line.substr(line.find('|') + 2).c_str())) < 0){
			std::cout << "Error: not a positive number." << std::endl;
		} else if (value > 1000){
			std::cout << "Error: too large number." << std::endl;
		} else{
			if (_dataBase.find(date) == _dataBase.end()){
				it = _dataBase.lower_bound(date);
				it--;
			} else{
				it = _dataBase.find(date);
			}
			std::cout << line.substr(0, line.find(' '))
				<< " => " << line.substr(line.find('|') + 2) << " = "
				<< value * it->second << std::endl; 
		}
	}
}

void	BitcoinExchange::printResult()
{
	std::map<time_t, float>::iterator it = _dataBase.begin();
	for (; it != _dataBase.end(); it++) {
		std::cout << "date: " << it->first << " bt: " << it->second << std::endl;
	}
}