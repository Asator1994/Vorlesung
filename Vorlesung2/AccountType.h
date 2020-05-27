#pragma once
#include <string>

using std::string;

class AccountType
{
public:
    AccountType(string name, string description);
    ~AccountType();

    string getName() const;
    string getDescription() const;
    int getId() const;

private:
    const int m_id;
    const string m_name;
    const string m_description;
    static int maxId;
};
