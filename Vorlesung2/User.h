#pragma once
#include <String>

class User
{
public:
	User(std::string name = "Hans");
	void print() const;

private:
	const std::string m_name;
	const int m_id;
	static int s_id;
};

