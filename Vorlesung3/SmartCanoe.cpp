#include "SmartCanoe.h"
#include <iostream>

int SmartCanoe::id = 0;

SmartCanoe::SmartCanoe()
	: m_id(id++)
{
	std::cout << "Constructing SmartCanoe " << m_id << std::endl;
}

SmartCanoe::~SmartCanoe()
{
	std::cout << "Destroying SmartCanoe" << m_id << std::endl;
}

void SmartCanoe::assignTeam(std::shared_ptr<const SmartTeam> team)
{
	m_team = team;
}
