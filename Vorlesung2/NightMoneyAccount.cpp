#include "NightMoneyAccount.h"

NightMoneyAccount::NightMoneyAccount(long accountNumber, long bankCode, string owner, int amount_ct, double interestRate, int savingDuration_month)
    : Account(accountNumber, bankCode, owner, amount_ct, interestRate)
    , m_savingDuration_month(savingDuration_month)
{
}

NightMoneyAccount::~NightMoneyAccount()
{
}

int NightMoneyAccount::getSavingDuration_month() const
{
    return m_savingDuration_month;
}

string NightMoneyAccount::getAccountTypeName() const
{
    return "NightMoneyAccount";
}

void NightMoneyAccount::print() const
{
    print(" savingDuration: " + std::to_string(m_savingDuration_month));
}
