#include "Account.h"

#include <iostream>

int Account::maxId = 0;

Account::Account(long accountNumber, long bankCode,string owner, int amount_ct,  double interestRate)
    : m_id(++maxId)
    , m_accountNumber(accountNumber)
    , m_bankCode(bankCode)
    , m_owner(owner)
    , m_amount_ct(amount_ct)
    , m_interestRate(interestRate)
{
}

Account::~Account()
{
}

int Account::getId() const
{
    return m_id;
}

long Account::getAccountNumber() const
{
    return m_accountNumber;
}

long Account::getBankCode() const
{
    return m_bankCode;
}

string Account::getOwner() const
{
    return m_owner;
}

int Account::getAmount_ct() const
{
    return m_amount_ct;
}

double Account::getInterestRate() const
{
    return m_interestRate;
}

void Account::addMoney(int amount_ct)
{
    if (amount_ct > 0) {
        m_amount_ct += amount_ct;
    }
}

void Account::print(std::string additionalInfo) const
{
    std::cout << "id: " << m_id << " accountNr: " << m_accountNumber << " bankCode: " << m_bankCode << " owner: " << m_owner << " amount: " << m_amount_ct << " interest: " << m_interestRate << additionalInfo << std::endl;
}
