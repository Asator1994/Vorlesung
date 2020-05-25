#include "User.h"
#include <iostream>

int User::s_id{ 0 };

User::User(std::string name)
	: m_name(name)
	, m_id(s_id++)
{
}

void User::print() const
{
	std::cout << m_name << " ID: " << m_id << std::endl;;
}
