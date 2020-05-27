#include "CurrentAccount.h"



CurrentAccount::CurrentAccount(long accountNumber, long bankCode, string owner, int amount_ct, double interestRate, int dispo_ct)
    : Account(accountNumber, bankCode, owner, amount_ct, interestRate)
    , m_dispo_ct(dispo_ct)
{
}

CurrentAccount::~CurrentAccount()
{
}

string CurrentAccount::getAccountTypeName() const
{
    return "CurrentAccount";
}

int CurrentAccount::getDispo() const
{
    return m_dispo_ct;
}

void CurrentAccount::addMoney(int amount_ct)
{
    if (m_amount_ct + amount_ct > m_dispo_ct) {
        m_amount_ct += amount_ct;
    }
}

void CurrentAccount::print() const
{
    print("dispo" + std::to_string(m_dispo_ct));
}

