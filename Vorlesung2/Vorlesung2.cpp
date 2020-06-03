#include "Sight.h"
#include "Toilet.h"

#include "User.h"

#include "Account.h"
#include "CurrentAccount.h"
#include "HomeLoanSavingContract.h"
#include "NightMoneyAccount.h"

#include <iostream>

#include <memory>

#include <random>

int randomNumber = 5;
int anotherRandomNumber = 5;
int andAnotherOne = 90;

void locations() {
    Location* first {new Location(1, 2, "A simple location")};
    Location* second {new Toilet(1, 2, "Toilet of Doom", "pee") };
    Location* third{ new Sight(1,2, "A beautiful sight", "1000 further sights") };

    first->visit();
    second->visit();
    third->visit();
}

void users() {
    const User* user{ new User("Hans") };
    user->print();
    user = new User("Troll");
    user->print();
    user = new User("Troll1");
    user->print();
    user = new User("Troll2");
    user->print();
    user = new User("Troll3");
    user->print();
    user = new User("Troll4");
    user->print();
    user = new User("Troll5");
    user->print();
    user = new User("Troll6");
    user->print();
}

void accounts() {
    std::mt19937 mt_rand(time(0));
    Account* account1{ new CurrentAccount(mt_rand() % 1000000, 250500001, "Hans Wurst", 5000, 1.1, -3000) };
    account1->addMoney(499);
    Account* account2{ new CurrentAccount(mt_rand() % 1000000, 250500001, "Hans Wurst", 6000, 2.1, -6000) };
    account2->addMoney(-6334);
    Account* account3{ new HomeLoanSavingContract(mt_rand() % 1000000, 250500001, "Hans Wurst", 5000, 3.1, 6000000) };
    account1->addMoney(3434);
    Account* account4{ new HomeLoanSavingContract(mt_rand() % 1000000, 250500001, "Hans Wurst", 1000, 4.1, 2000000) };
    account1->addMoney(4354);
    Account* account5{ new NightMoneyAccount(mt_rand() % 1000000, 250500001, "Hans Wurst", 100, 5.1, 24) };
    account1->addMoney(4334);
    Account* account6{ new NightMoneyAccount(mt_rand() % 1000000, 250500001, "Hans Wurst", 1000, 6.1, 1200) };
    account1->addMoney(134434);
    account1->print();
    account2->print();
    account3->print();
    account4->print();
    account5->print();
    account6->print();
}

int getNextNumber() {
    return --randomNumber;
}

int getNextNumber(int a) {
    return --randomNumber;
}

int getNextNumber(int a, int b) {
    return --andAnotherOne;
}
int divide(int a, int b);

void methodA() {
    divide(1, 1);
}
void methodB() {
    divide(2, 1);
}
void methodC() {
    divide(1, 2);
}
void methodD() {
    divide(0, 10);
}
void methodE() {
    divide(13, 5);
}
void methodF() {
    divide(13, 5);
}
void methodG() {
    divide(13, 5);
}
void methodH() {
    divide(13, 5);
}
void methodI() {
    divide(13, 5);
}
void methodJ() {
    divide(13, 5);
}
void methodK() {
    divide(0, 0);
}

void callMethodsAToK() {
    methodA();
    methodB();
    methodC();
    methodD();
    methodE();
    methodF();
    methodG();
    methodH();
    methodI();
    methodJ();
    methodK();
}

int divide(int a, int b) {
    return a / b;
}

void debugging() {
    int a = 723;
    for (int i = 0; i < 100; i++) {
        a += a / getNextNumber();
    }
    callMethodsAToK();
    for (int i = 0; i < 100; i++) {
        a += a / getNextNumber(a);
    }
    for (int i = 0; i < 100; i++) {
        a += a / getNextNumber(a, a);
    }
}

int main()
{
    // locations();
    // users();
    //accounts();
    debugging();

    std::cout << "Hello World!\n";
}

