#include "HomeLoanSavingContract.h"


HomeLoanSavingContract::HomeLoanSavingContract(long accountNumber, long bankCode, string owner, int amount_ct, double interestRate, int homeLoanSavingAmount_ct)
    : Account(accountNumber, bankCode, owner, amount_ct, interestRate)
    , m_homeLoanSavingAmount_ct(homeLoanSavingAmount_ct)
{
}

HomeLoanSavingContract::~HomeLoanSavingContract()
{
}

int HomeLoanSavingContract::getHomeLoanSavingAmount_ct() const
{
    return m_homeLoanSavingAmount_ct;
}

string HomeLoanSavingContract::getAccountTypeName() const
{
    return "HomeLoanSavingContract";
}

void HomeLoanSavingContract::print() const
{
    print(" saving Amount: " + std::to_string(m_homeLoanSavingAmount_ct));
}
