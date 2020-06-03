#include "Canoe.h"
#include <iostream>

int Canoe::id = 0;

Canoe::Canoe()
	: m_id(id++)
{
	std::cout << "Constructing Canoe " << m_id << std::endl;
}

Canoe::~Canoe()
{
	std::cout << "Destroying Canoe" << m_id << std::endl;
}

void Canoe::assignTeam(const Team * team)
{
	m_team = team;
}
