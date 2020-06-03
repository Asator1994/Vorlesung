#include "Team.h"

#include "Canoe.h"
#include "Person.h"

#include <iostream>

int Team::id = 0;

Team::Team(Canoe * canoe)
	: m_id(id++)
	, m_canoe(canoe)
{
	canoe->assignTeam(this);
	std::cout << "Constructing Team " << m_id << std::endl;
}

Team::~Team()
{
	std::cout << "Destroying Team" << m_id << std::endl;
}

void Team::assignPerson(Person* person, bool personWasAlreadyModified)
{
	if (!isFull() && (person->canJoinAnotherTeam() || !personWasAlreadyModified)) {
		m_members.push_back(person);
		if (!person->canJoinAnotherTeam()) {
			person->joinTeam(this);
		}
	}
}

bool Team::isFull() const
{
	return m_members.size() < 5;
}
