#include "Person.h"
#include "Team.h"

#include <iostream>

int Person::id = 0;

Person::Person()
	: m_id(id++)
{
	std::cout << "Constructing Person " << m_id << std::endl;
}

Person::~Person()
{
	std::cout << "Destroying Person" << m_id << std::endl;
}

bool Person::canJoinAnotherTeam() const
{
	return m_teams.size() < 3;
}

void Person::joinTeam(Team* team, bool teamIsAlreadyModified)
{
	if (canJoinAnotherTeam() && (teamIsAlreadyModified || !team->isFull())) {
		m_teams.push_back(team);
		if (!teamIsAlreadyModified) {
			team->assignPerson(this);
		}
	}
}
