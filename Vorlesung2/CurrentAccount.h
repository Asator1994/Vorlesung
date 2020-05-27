#pragma once
#include "Account.h"
class CurrentAccount : public Account
{
public:
    CurrentAccount(long accountNumber, long bankCode, string owner, int amount_ct, double interestRate, int dispo_ct);
    ~CurrentAccount();

    string getAccountTypeName() const override;
    int getDispo() const;
    void addMoney(int amount_ct) override;    
    using Account::print;
    void print() const override;

private:
    const int m_dispo_ct;
};

