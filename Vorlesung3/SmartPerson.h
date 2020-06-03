#pragma once

#include <memory>
#include <vector>

class SmartTeam;

class SmartPerson
{
public:
	SmartPerson();
	~SmartPerson();
	bool canJoinAnotherTeam() const;
	void joinTeam(std::weak_ptr<SmartTeam> team);
private:
	std::vector<std::weak_ptr<const SmartTeam>> m_teams;
	const int m_id;
	static int id;
};

