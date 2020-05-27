#pragma once

#include "Account.h"

class NightMoneyAccount : public Account
{
public:
    NightMoneyAccount(long accountNumber, long bankCode, string owner, int amount_ct, double interestRate, int savingDuration_month);
    ~NightMoneyAccount();

    int getSavingDuration_month() const;

    string getAccountTypeName() const override;
    using Account::print;
    void print() const override;

private:
    const int m_savingDuration_month;
};

