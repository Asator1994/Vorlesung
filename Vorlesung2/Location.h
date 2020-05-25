#pragma once
#include <string>

class Location
{
public:
	Location(int x, int y, std::string name);
	~Location() = default;
	virtual void visit() const;

protected:
	const int m_x;
	const int m_y;
	const std::string m_name;
};

