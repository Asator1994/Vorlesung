#pragma once

#include <memory>
#include <vector>

class SmartTeam;

class SmartCanoe
{
public:
	SmartCanoe();
	~SmartCanoe();
	void assignTeam(std::shared_ptr<const SmartTeam> team);

private:
	std::shared_ptr<const SmartTeam> m_team{ nullptr };
	const int m_id;
	static int id;
};

