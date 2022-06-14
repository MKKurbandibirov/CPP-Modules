/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magomed <magomed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:22:44 by magomed           #+#    #+#             */
/*   Updated: 2022/05/16 12:54:33 by magomed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void) {}
Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << "closed" << std::endl;
}


Account::Account(int initial_deposit) {
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += this->_amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

int Account::getNbAccounts(void) {
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return Account::_totalNbWithdrawals;
}

void    Account::_displayTimestamp(void) {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << std::setfill('0') << "[" << std::setw(4) << (now->tm_year + 1900)
        << std::setw(2) << now->tm_mon << std::setw(2) << now->tm_mday
        << "_" << std::setw(2) << now->tm_hour << std::setw(2) << now->tm_min
        << std::setw(2) << now->tm_sec << "] ";
}

void    Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() <<
    ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void    Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"
        << this->_nbDeposits << ";widthdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount+=deposit;
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    if (withdrawal > this->_amount) {
        std::cout << ";withdrawal:" << "refused" << std::endl;
        return false;
    }
    std::cout << ";withdrawal:" << withdrawal;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}
