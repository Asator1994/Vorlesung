#pragma once

#include <memory>
#include <vector>

class SmartCanoe;
class SmartPerson;

class SmartTeam
{
public:
	SmartTeam(std::weak_ptr<SmartCanoe> canoe);
	~SmartTeam();
	void assignPerson(std::weak_ptr<SmartPerson> person);
	bool isFull() const;
private:
	std::vector<std::weak_ptr<const SmartPerson>> m_members;
	std::weak_ptr<const SmartCanoe> m_canoe;
	const int m_id;
	static int id;
};
