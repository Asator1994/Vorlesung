#pragma once

#include <vector>

class Person;
class Team;

class Canoe
{
public:
	Canoe();
	~Canoe();
	void assignTeam(const Team * team);

private:
	const Team* m_team{ nullptr };
	const int m_id;
	static int id;
};

