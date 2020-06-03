#pragma once

#include <memory>
#include <vector>

class Person;
class Canoe;

class Team
{
public:
	Team(Canoe * canoe);
	~Team();
	void assignPerson(Person* person, bool personWasAlreadyModified = false);
	bool isFull() const;
private:
	std::vector<const Person*> m_members;
	const Canoe* m_canoe;
	const int m_id;
	static int id;
};
