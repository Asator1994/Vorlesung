#include "Canoe.h"
#include "Person.h"
#include "SmartCanoe.h"
#include "SmartPerson.h"
#include "SmartTeam.h"
#include "Team.h"

#include <iostream>
#include <memory>

// Disclaimer: Die Namen der Klassen "SmartPerson", "SmartCanoe" und "SmartTeam" sollten im echten Leben, 
// nur weil man Smartpointer benutzt nie so gewählt werden. Der Grund ist an dieser Stelle nur, dass eine Dopplung
// der Klassennamen verhindert werden soll. Sinnvolle Namen wären normalerweise "Person", "Canoe" und "Team"
// Auch ist dieses Programm darüber hinaus nicht sehr sinnvoll. So wird beispielsweise nicht geprüft, ob Personen
// mehrfach im selben Team sind, ob Kanus mehreren Teams zugewiesen sind, oder, ob man Personen Teams neu zuweisen kann
// wenn andere Personen gelöscht werden


void smartPointers() {
    std::cout << "CALLING smartPointers" << std::endl;
    std::cout << "CALLING pointers" << std::endl;
    std::shared_ptr<SmartCanoe> canoe1 = std::make_shared<SmartCanoe>();
    std::shared_ptr<SmartCanoe> canoe2 = std::make_shared<SmartCanoe>();
    std::shared_ptr<SmartCanoe> canoe3 = std::make_shared<SmartCanoe>();
    std::shared_ptr<SmartTeam> team1 = std::make_shared<SmartTeam>(canoe1);
    std::shared_ptr<SmartTeam> team2 = std::make_shared<SmartTeam>(canoe2);
    std::shared_ptr<SmartTeam> team3 = std::make_shared<SmartTeam>(canoe3);
    std::shared_ptr<SmartPerson> person1 = std::make_shared<SmartPerson>();
    std::shared_ptr<SmartPerson> person2 = std::make_shared<SmartPerson>();
    std::shared_ptr<SmartPerson> person3 = std::make_shared<SmartPerson>();
    std::shared_ptr<SmartPerson> person4 = std::make_shared<SmartPerson>();
    std::shared_ptr<SmartPerson> person5 = std::make_shared<SmartPerson>();
    std::shared_ptr<SmartPerson> person6 = std::make_shared<SmartPerson>();

    if (!team1->isFull() && person1->canJoinAnotherTeam()) {
        team1->assignPerson(person1);
    }
    if (!team2->isFull() && person2->canJoinAnotherTeam()) {
        team2->assignPerson(person2);
    }
    if (!team3->isFull() && person3->canJoinAnotherTeam()) {
        team3->assignPerson(person3);
    }
    if (!team3->isFull() && person4->canJoinAnotherTeam()) {
        team3->assignPerson(person4);
    }
    if (!team3->isFull() && person5->canJoinAnotherTeam()) {
        team3->assignPerson(person5);
    }
    if (!team3->isFull() && person6->canJoinAnotherTeam()) {
        team3->assignPerson(person6);
    }
    std::cout << "LEAVING smartPointers" << std::endl;
}

void pointers() {
    std::cout << "CALLING pointers" << std::endl;
    Canoe* canoe1{ new Canoe() };
    Canoe* canoe2{ new Canoe() };
    Canoe* canoe3{ new Canoe() };
    Team* team1{ new Team(canoe1) };
    Team* team2{ new Team(canoe2) };
    Team* team3{ new Team(canoe3) };
    Person* person1{ new Person() };
    Person* person2{ new Person() };
    Person* person3{ new Person() };
    Person* person4{ new Person() };
    Person* person5{ new Person() };
    Person* person6{ new Person() };
    team1->assignPerson(person1);
    team2->assignPerson(person2);
    team3->assignPerson(person3);
    team3->assignPerson(person4);
    team3->assignPerson(person5);
    team3->assignPerson(person6);

    delete canoe1;
    delete canoe2;
    delete canoe3;
    delete team1;
    delete team2;
    delete team3;
    // sollten wir an dieser Stelle eine Methode auf unserer Person aufrufen, die etwas mit den ihnen
    // zugewiesenen Teams tut, haben wir undefined behaviour 
    delete person1;
    delete person2;
    delete person3;
    delete person4;
    delete person5;
    delete person6;
    std::cout << "LEAVING pointers" << std::endl;
}

int main()
{
    pointers();
    smartPointers();
}

