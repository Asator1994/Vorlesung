#pragma once
#include "Account.h"
class HomeLoanSavingContract : public Account
{
public:
    HomeLoanSavingContract(long accountNumber, long bankCode, string owner, int amount_ct, double interestRate, int homeLoanSavingAmount_ct);
    ~HomeLoanSavingContract();

    int getHomeLoanSavingAmount_ct() const;
    string getAccountTypeName() const override;
    using Account::print;
    void print() const override;

private:
    const int m_homeLoanSavingAmount_ct;
};

