#include "Sight.h"
#include "Toilet.h"
#include "User.h"

#include <iostream>

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

int main()
{
    // locations();
    users();
    std::cout << "Hello World!\n";
}

