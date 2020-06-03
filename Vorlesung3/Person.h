#pragma once

#include <vector>

class Team;

class Person
{
public:
	Person();
	~Person();
	bool canJoinAnotherTeam() const;
	void joinTeam(Team* team, bool teamIsAlreadyModified = false);
private:
	std::vector<const Team*> m_teams;
	const int m_id;
	static int id;
};

