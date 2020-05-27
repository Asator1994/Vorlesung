#pragma once

#include <string>
#include <ctime>

class User;
using std::string;

class Account
{
public:
    Account(long accountNumber, long bankCode, string owner, int amount_ct, double interestRate);
    ~Account();

    int getId() const;
    virtual long getAccountNumber() const;
    virtual string getAccountTypeName() const = 0;
    long getBankCode() const;
    string getOwner() const;
    int getAmount_ct() const;
    double getInterestRate() const;
    virtual void addMoney(int amount_ct);
    virtual void print() const = 0;

protected:
    void print(std::string additionalInfo) const;
    const int m_id;
    const long m_accountNumber;
    const long m_bankCode;
    const string m_owner;
    int m_amount_ct;
    const double m_interestRate;

private:
    static int maxId;
};

