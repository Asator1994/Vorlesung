#include "SmartTeam.h"
#include <iostream>

#include "SmartCanoe.h"
#include "SmartPerson.h"

int SmartTeam::id = 0;

SmartTeam::SmartTeam(std::weak_ptr<SmartCanoe> canoe)
	: m_id(id++)
{
	std::cout << "Constructing SmartTeam " << m_id << std::endl;
}

SmartTeam::~SmartTeam()
{
	std::cout << "Destroying SmartTeam" << m_id << std::endl;
}

void SmartTeam::assignPerson(std::weak_ptr<SmartPerson> person)
{
	if (!isFull()) {
		m_members.push_back(person);
	}
}

bool SmartTeam::isFull() const
{
	return m_members.size() < 5;
}
