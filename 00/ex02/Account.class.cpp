#include <Account.class.hpp>
#include <iomanip>
#include <iostream>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout	<< "accounts: " << Account::_nbAccounts << " | "
				<< "total: " << Account::_totalAmount << " | "
				<< "deposits: " << Account::_totalNbDeposits << " | "
				<< "withdrawals: " << Account::_totalNbWithdrawals << std::endl << std::endl;
}

Account::Account()
{
	this->_accountIndex = this->_nbAccounts + 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	Account::_nbAccounts++;
	std::cout << "Account #" << this->_accountIndex << " created with amount: " << this->_amount << std::endl << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts + 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "Account #" << this->_accountIndex << " created with amount: " << this->_amount << std::endl << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	if (this->_amount > 0)
		Account::_totalAmount -= this->_amount;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "Account #" << this->_accountIndex << " made a " << deposit << " deposit. New amount: " << this->_amount << std::endl << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "Account #" << this->_accountIndex << " " << withdrawal << " withdrawal refused" << std::endl << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_displayTimestamp();
	std::cout << "Account #" << this->_accountIndex << " withdrawed " << withdrawal << std::endl << std::endl;
	return (true);
}

int		Account::checkAmount(void) const
{
	if (this->_amount > 0)
		return (1);
	return (0);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout	<< "index: #" << this->_accountIndex << " | "
				<< "amount: " << this->_amount << " | "
				<< "deposits: " << this->_nbDeposits << " | "
				<< "withdrawals: " << this->_nbWithdrawals << std::endl << std::endl;
}

void Account::_displayTimestamp(void)
{
	auto timestamp = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	std::cout << std::ctime(&timestamp);
}
