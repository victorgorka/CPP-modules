#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)	{ return(_nbAccounts);			}
int	Account::getTotalAmount(void)	{ return(_totalAmount);			}
int	Account::getNbDeposits(void)	{ return(_totalNbDeposits);		}
int	Account::getNbWithdrawals(void)	{ return(_totalNbWithdrawals);	}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< "accounts:"		<< getNbAccounts()
				<< ";total:"		<< getTotalAmount()
				<< ";deposits:"		<< getNbDeposits()
				<< ";withdrawals:"	<< getNbWithdrawals()
				<< std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:"			<< _accountIndex
				<< ";amount:"		<< _amount
				<< ";deposits:"		<< _nbDeposits
				<< ";withdrawals:"	<< _nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< "index:"		<< _accountIndex
				<< ";p_amount:"	<< _amount
				<< ";deposit:"	<< deposit;
	_amount += deposit;
	_nbDeposits++;
	std::cout	<< ";amount:"		<< _amount
				<< ";nb_deposits:"	<< _nbDeposits
				<< std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< "index:"		<< _accountIndex
				<< ";p_amount:"	<< _amount; 
	if (withdrawal > _amount)
	{
		std::cout	<< ";withdrawal:refused"
					<< std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	std::cout	<< ";withdrawal:"	<< withdrawal
				<< ";amount:"		<< _amount
				<< ";nb_withdrawals:"	<< _nbWithdrawals
				<< std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return true;
}

void	formatTime(int	time)
{
	if (time > 9)
		std::cout << time;
	else
		std::cout << "0" << time;
}

void	Account::_displayTimestamp(void)
{
	time_t	ltime;
	ltime = time(NULL);

	std::tm *tm_local = localtime(&ltime);
	std::cout << "[" << tm_local->tm_year + 1900;
	formatTime(tm_local->tm_mon + 1);
	formatTime(tm_local->tm_mday);
	std::cout << "_";
	formatTime(tm_local->tm_hour);
	formatTime(tm_local->tm_min);
	formatTime(tm_local->tm_sec);
	std::cout << "] ";
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount += initial_deposit;
	_totalAmount += initial_deposit;
	std::cout	<< "index:"		<< _accountIndex
				<< ";amount:"	<< _amount
				<< ";created"	<< std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout	<< "index:"		<< _accountIndex
				<< ";amount:"	<< _amount
				<< ";closed"	<< std::endl;
}

